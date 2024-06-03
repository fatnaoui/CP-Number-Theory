#include <iostream>
#include <vector>
using namespace std;

#define N 10000000
vector<bool> v(N+1,true);
vector<int> prime;

void sieve(){
    for(int i=2;i<=N;i=i+2){
        v[i] = false;
    }
    v[2] = true;
    prime.push_back(2);
    for(int i=3;i*i<=N;i++){
        if(v[i]){
            prime.push_back(i);
            for(int j=i*i;j<=N;j=j+i){
                v[j] = false;
            }
        }
    }
}


int main() {
    int n;cin>>n;
    sieve();
    while(n--){
        cout<<prime[n]<<endl;
    }
}
