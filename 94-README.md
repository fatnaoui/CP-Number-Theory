## Linear Diophantine Equation
----------------------------------
Let's see when the equation ax + by = c has a solution:

Let's suppose gcd(a,b) = g

--> there are k1,k2 in which a = k1*g and b = k2*g

--> k1*g*x + k2*g*y = c

--> k1*x + k2*y = c/g

--> and because k1*x + k2*y is an integer so c/g must be also an integer 

--> the result is the equation has a solution if c%g == 0, in other word, c is a multiple of g 

## Solving The Equation 
------------------------
Let's say the equation has a solution (c is a multiple of gcd(a,b))

First finding k in which k*gcd(a,b) = c

Then solve the equation ax + by = gcd(a,b)

After that multiply the solution by k to get the solution of your equation 
