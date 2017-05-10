# -*- coding: utf-8 -*-
"""
Created on Wed May 10 02:33:00 2017

@author: Matt
"""

"""
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
"""

og_n=600851475143
n=og_n

#I think I basically need to reset the index of the loop each time
for i in range(2,50000): #note that this doesn't work if a factor is divisible by a square I think
    while n%i==0 and n != i:
        n=n/i
            
print("the largest prime factor of "+str(og_n)+" is "+str(int(n)))