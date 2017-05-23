# -*- coding: utf-8 -*-
"""
Created on Thu May 11 00:21:23 2017

@author: Matt
"""

"""
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
"""

#this is going to work, but it will be slow
def sumPrimes(n):
    num_primes=0
    number=2
    sum=0
    while number<n:
        for i in range(2,number+1):
            if number%i==0:
                if number != i:   
                    break #and move on because this number has a factor
                else:
                    num_primes+=1
                    print("found prime number "+ str(num_primes)+"! ",number)
                    sum+=number
        number+=1
    return sum
#this finds primes but slowly
                
if __name__=="__main__":
    print(sumPrimes(10))
#    print(sumPrimes(2000000))