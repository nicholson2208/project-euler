# -*- coding: utf-8 -*-
"""
Created on Wed May 10 13:41:51 2017

@author: Matt
"""

"""
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
"""

#basically need to count the number of distinct prime factors
def lcm(n):
    """
    take in the highest of the consecutive numbers and return the lcm
    """
    distinct_factors={}
    product=1
    
    for num in range(2,n+1):
        pf=prime_factorization(num)
        #somehow selectively pull distinct factors
        #make a local count
        for key in list(pf.keys()):
            if key in list(distinct_factors.keys()):
               if pf[key]>=distinct_factors[key]:
                   distinct_factors[key]=pf[key] #this is wrong
            else:
                   distinct_factors[key]=1
    
    print(distinct_factors)
    
    for key in list(distinct_factors.keys()):
        product*=int(key)**distinct_factors[key]
        
    return product
            
def prime_factorization(number):
#for now just return the numbers, so I can get the list part working
    factors={}
    for i in range(2,2*number): #this is weird and probably dumb
        if number==1: break;
        while number % i == 0:
            number=number/i
            try:
                factors[str(i)]+=1
            except:
                factors[str(i)]=1
        
        
    return factors
    
if __name__=="__main__":
#    print(prime_factorization(2*2*3*5*7))
    print("the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is ",lcm(20))