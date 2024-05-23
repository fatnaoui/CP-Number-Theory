#include <iostream>
using namespace std;

#define ll long long
ll FastEXpo(ll a,ll b,ll m){
    ll ans = 1;
    while(b>0){
        if(b&1){
            ans *= a;
            ans %= m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return ans%m;
}
int main() {
    int a,b,m;
    cin>>a>>b>>m;
    cout<<FastEXpo(a,b,m);
}
