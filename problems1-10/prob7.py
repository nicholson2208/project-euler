# -*- coding: utf-8 -*-
"""
Created on Wed May 10 21:06:15 2017

@author: Matt
"""

"""
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
"""

def findNthPrime(n):
    num_primes=0
    for number in range(2,1000000):
        for i in range(2,number+1):
            if number%i==0:
                if number != i:   
                    break #and move on because this number has a factor
                else:
                    num_primes+=1
                    print("found prime number "+ str(num_primes)+"! ",number)
                    if num_primes==n:
                        return number
                
#this finds primes but slowly
                
if __name__=="__main__":
    findNthPrime(10001)