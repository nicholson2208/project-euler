# -*- coding: utf-8 -*-
"""
Created on Wed May 10 02:17:31 2017

@author: Matt
"""

"""
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

"""

def fib(n):
    if n<2:
        return 1
    return fib(n-1)+fib(n-2)
    
if __name__=="__main__": #knowing that you have to use the previous there is a smarter way to do this
    
#    n=1
#    curr=fib(n)
#    sum=0
#    while curr<4000000: #lol yikes this is like O(2^n)
#        if curr%2 ==0:
#            sum+=curr
#        curr=fib(n+1)
#    print("The sum at the end of the day is", sum)
    
    oldold=1
    old=1
    new=2
    
    sum=0
    while new<4000000: #much better lol
        if new%2==0:
            sum+=new
        temp=new
        new=new+old
        oldold=old
        old=temp
    print("The sum at the end of the day is", sum)
        