# -*- coding: utf-8 -*-
"""
Created on Wed May 10 02:33:00 2017

@author: Matt
"""

"""
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
"""

og_n=81*4
n=og_n
for i in range(2,15): #note that this doesn't work if a factor is divisible by a square I think
    if n ==1: break
    if n%i==0:
        print("cool, "+str(i)+" divides "+str(og_n)+", now make n the other factor "+str(n/i))
        n=n/i
        for ii in range(2,i):
            if n%ii==0:
                print("cool, "+str(ii)+" divides "+str(og_n)+", now make n the other factor "+str(n/ii))
                n=n/ii
        
print(n)