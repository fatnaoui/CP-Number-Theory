## Primality Test (Miller Rabin)
--------------------------------
### Theorems:
#### Fermat little theorem (FLT):
If p is a prime number so a^(p-1) % [p] == 1
#### Euclid's lemme:
- If p is a prime number and p divides the product of two numbers x*y, so p divide at least one of the numbers x or y
- If it is a composite number, it does't mean it divides x or y
### Steps to do:
- n=1, not prime
- n=2, prime
- n%2=0, not prime

Now n is an old number and >= 3. if n is prime, so a^(n-1) % [n] == 1

We know that n-1 is even so n-1 = d*2^s with d is old 

- We check if a^(d) % [n] == 1

- if not we check if one of these satisfy the condition
  - a^(d*2^r) % [n] == 1     -->      r in {2,n-2}
