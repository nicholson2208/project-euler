# -*- coding: utf-8 -*-
"""
Created on Wed May 10 13:14:21 2017

@author: Matt
"""

"""
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
"""

#I'm thinking about brute forcing

best=0
best_pair=(0,0)

x=9000

while x < 10000:
    y=9000
    while y < 10000:
        product=x*y
        s_prod=str(product)
        if s_prod == s_prod[::-1]:
            if product > best:
                best=product
                best_pair = (x,y)
                x = max(x,y)
        y+=1
    x+=1
    
print("the best pair is",best_pair)
print("and the product is", best)
    