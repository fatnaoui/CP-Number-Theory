## Chinese Reminder Method
---------------------------
Let's say we wanna find the x in which :

x % 2 = 1

x % 7 = 5

x % 3 = 2

Using brute force method is unefficient way. So CRT (Chinese Reminder Method) says :

if you wanna find the x such as 

x % m[0] = rest[0]

so on .....

x % m[k-1] = rest[k-1]

So x = sum{i=0 to i=k-1} of (rest[i] * pp[i] * inv[i]) % prod

such that prod is the product of the m

and pp[i] = prod/m[i]

and inv[i] is multiple modulo inverse of pp[i] wrt m[i]

