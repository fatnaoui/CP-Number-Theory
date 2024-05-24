## Mutiplicative Modulo Inverse
------------------------------------
- The multiplicative modulo inverse of a is the number b in which (a*b) % m = 1
- Let's calculate it :

We have (a*b) % m = 1

--> (a*b) % m - 1 = 0

--> there is a k that satisfy   a*b - 1 = k*m

--> (a*b) + m*(-k) = 1

--> this equation has a solution if gcd(a,b) = 1 // gcd stands for greater common divisor

--> Now it is easy to find b using Extended Euclid Algorithm 

