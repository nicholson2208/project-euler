# -*- coding: utf-8 -*-
"""
Created on Wed May 10 02:12:07 2017

@author: Matt
"""

"""
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
"""
sum=0
for num in range(1,1000):
    if num%3==0 or num%5==0:
        sum+=num
    if num == 10:
        print("Sanity check: below 10 gives",sum)
print("The sum of all the multiples of 3 or 5 below 1000 is",sum)