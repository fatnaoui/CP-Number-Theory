## Gcd & Lcm
----------------
- Gcd stands for greater common divisor. To claculate it you can brute force it which bad idea (as a CP programmer)
What you can do is doing recursivity gcd(a,b) == gcd(b,a%b) until the second argument becomes 0 then we return the firsr.
- Lcm stands for least common multiple. To calculate it be aware of an relation which a*b == gcd(a,b)*lcm(a,b).
- The time complexity of Gcd is log(N).
