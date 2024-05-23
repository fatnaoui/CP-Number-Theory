## Modulo Properties
----------------------
- (a+b) % m = ((a%m) + (b%m)) % m
- (a-b) % m = ((a%m) - (b%m) + m) % m
- (a*b) % m = ((a%m) * (b%m)) % m
- (a/b) % m = ((a%m) * ((b^-1)%m)) % m

(b^-1) is the number y in which (b*y) % m =1 
