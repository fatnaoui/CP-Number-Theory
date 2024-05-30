#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

ll multi(ll a,ll b,ll m){
    ll ans = 0;
    while(b>0){
        if(b&1){
            ans = (ans+a)%m; 
        }
        a = (a*2)%m;
        b = b>>1;
    }
    return (ans+m)%m;
}

ll expo(ll a,ll b,ll m){
    ll ans = 1;
    while(b>0){
        if(b&1){
            ans = multi(ans,a,m);
        }
        a = multi(a,a,m);
        b=b>>1;
    }
    return (ans+m)%m;
}

bool miller_rabin(ll n){
    if(n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    // n is now old, so n-1 is even and >=3
    ll d = n-1;ll s = 0;
    while(d%2==0){
        s++;
        d /= 2;
    }
    // now d is old   n-1 == d*2^s
    // we take a random nuber between 2 and n-2. It gives a good accuracy using the top 9 prime numbers
    vector<ll> a = {2,3,5,7,11,13,17,19,23};
    for(ll i=0;i<a.size();i++){
        if(a[i]>n-2) continue;
        ll ad = expo(a[i],d,n);
        if(ad%n == 1) continue;
        bool prime = false;
        for(ll r=0;r<s;i++){
            ll rr = expo(2,r,n);
            ll arr = expo(ad,rr,n);
            if(arr%n == n-1){
                prime = true;
                break;
            }
        }
        if(!prime) return false;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    if(miller_rabin(n)){
        cout<<n<<" is prime";
    }
    else{
        cout<<n<<" is not prime";
    }
}

int main() {
    solve();  // limit is 3*10^18    3825123056546413051
    // it gives a good accuracy till this number 
}
