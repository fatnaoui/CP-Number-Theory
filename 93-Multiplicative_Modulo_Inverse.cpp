#include <iostream>
using namespace std;

#define ll long long
ll x,y;

ll gcd(ll a,ll b){
    return b==0?a:gcd(b,a%b);
}

void Extended(ll a,ll b){
    if(b==0){
        x = 1;
        y = 0;
        return;
    }
    Extended(b,a%b);
    ll cx = y;
    ll cy = x-(a/b)*y;
    x = cx;
    y = cy;
}

int main() {
    ll n,m;
    cin>>n>>m;
    if(gcd(n,m) == 1){
        Extended(n,m);
        cout<<(x+m)%m;
    }
    else{
        cout<<"doesn't exist";
    }
}
