#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long int
const ll n = 1000000;
vector<ll> v(n+1,true);
vector<ll> t;
void tprime(){
    v[1]=v[0]=false;
    for (ll i=2;i*i<=n;i++){
        if(v[i]){
            for(ll j=i+j;j<=n;j=j+i){
                v[j]=false;
            }
        }
    }
    for(ll i=2;i<=n;i++){
        if(v[i]){
            t.push_back(i*i);
        }
    }

}

void solve(){
    tprime();
    ll m;cin>>m;
    while(m--){
        ll a;cin>>a;
        bool f =  binary_search(t.begin(),t.end(),a);
        if(f) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
int main() {
    solve();
}
