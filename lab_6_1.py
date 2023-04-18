#Question1

import math

n = int(input("Enter the value of n: "))
x = int(input("Enter the value of x: "))

term = lambda i: (n ** i) / math.factorial(i)

terms_list = [term(i) for i in range(x+1)]

sum_terms = sum(terms_list)

e_to_the_n = math.exp(n)

diff = e_to_the_n - sum_terms

print(f"e^{n} = {sum_terms:.4f} + {diff:.4f}")
