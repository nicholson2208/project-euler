# -*- coding: utf-8 -*-
"""
Created on Thu May 11 00:09:04 2017

@author: Matt
"""

"""
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
"""
import math


def findThatTriple(target): #strat is guess and check brute force
    for a in range(1,500): #this is already bad because I'm checking the same pair twice, change to a while
        
        for b in range(1,500):
            hyp=a**2+b**2
            c=math.sqrt(hyp)
            if c%1==0:
                if a+b+c==target:
                    return (a,b,c)
            
            
if __name__=="__main__":
    print(findThatTriple(1000))