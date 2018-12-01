# Code from this blog post
# https://www.johndcook.com/blog/2018/10/28/fermat-factoring/
#
# Useful for understanding content and looking at how sympy works.

from sympy import sqrt, log, ceiling, Integer

def is_square(n):
    return type(sqrt(n)) == Integer

def fermat_factor(n):
    num_digits = int(log(n, 10).evalf() + 1)
    a = ceiling( sqrt(n).evalf(num_digits) )

    counter = 0
    while not is_square(a*a - n):
        a += 1
        counter += 1
        
    b = sqrt(a*a - n)
    return(a+b, a-b, counter)

p = 314159200000000028138418196395985880850000485810513
q = 314159200000000028138415196395985880850000485810479
print( fermat_factor(p*q) )
