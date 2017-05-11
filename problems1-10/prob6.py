# -*- coding: utf-8 -*-
"""
Created on Wed May 10 20:00:13 2017

@author: Matt
"""

"""
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
"""

sum_nums=0
sum_squares=0
for n in range(1,101):
    sum_squares+=n**2
    sum_nums+=n

diff=(sum_nums**2)-sum_squares

print("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is ", diff)