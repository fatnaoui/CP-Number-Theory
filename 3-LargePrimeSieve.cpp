#include <iostream>
#include<vector>
#include<bitset>

using namespace std;

const int n = 10000000;
bitset<10000005> b;
vector<int> primes;

void sieve(){
    b.set();  // 1 1 1 1
    b[0] = b[1] = 0;
    for (long long int i=2;i<n;i++){
        if(b[i]){
            primes.push_back(i);
            for(long long int j = i*i;j<n;j=j+i){
                b[j] = 0;
            }
        }
    }
}
bool isprime(long long int N){
    if(N<=n){
        return b[N]==1?true:false;
    }
    for(long long int i=0;primes[i]*(long long)primes[i]<=N;i++){
        if(N%primes[i] == 0){
            return false;
        }
    }
    return true;
}
int main() {
    long long int N;
    cin>>N;
    sieve();
    if(isprime(N)){
        cout<<"it is prime";
    }
    else{
        cout<<"it's not prime";
    }
}