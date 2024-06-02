#include <iostream>
using namespace std;

#define ll long long int
const ll m = 1000000007;

ll multi_expo(ll a,ll b,ll m){
    ll ans = 0;
    while(b>0){
        if(b&1==1){
            ans = (ans+a)%m;
        }
        a = 2*a;
        b = b>>1;
    }
    return (ans+m)%m;
}

ll Expo(ll a,ll b,ll m){
    ll ans = 1;
    while(b>0){
        if(b&1==1){
            ans = multi_expo(ans,a,m);
        }
        a = multi_expo(a,a,m);
        b = b>>1;
    }
    return (ans+m)%m;
}

void solve(){
    ll n;cin>>n;
    cout<<Expo(n,m-2,m);
}
int main() {
    solve();
}
