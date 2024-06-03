#include <iostream>
#include <vector>
using namespace std;

#define ll int

#define N 10000000
vector<bool> v(N+1,true);
vector<ll> prime;

void sieve(){
    v[0] = v[1] = false;
    for(ll i=2;i*i<=N;i++){
        if(v[i]){
            for(ll j=i*i;j<=N;j=j+i){
                v[j] = false;
            }
        }
    }
    for(ll i=2;i*i<=N;i++){
        if(v[i]) {prime.push_back(i);}
    }
}


int main() {
    sieve();
    int T;cin>>T;
    while(T--){
        ll m,n;
        cin>>m>>n;
        vector<bool> segment(n-m+1,true);
        for(ll x:prime){
            if(x*x>n){ break;}
            ll start = max(x,((m/x)*x)+x);
            if(m%x==0) {start = m;}
            for(ll i=start;i<=n;i=i+x){
                segment[i-m] = false;
            }
        }
        for(ll i=m;i<=n;i++){
            if(segment[i-m]){
                cout<<i<<'\n';
            }
        }
        cout<<'\n';
    }
}
