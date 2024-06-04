#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define N 1000000
#define M 1000000007
vector<bool> is_prime(N+1,true);
vector<int> prime;

int multi(int a,int b,int m){
    int ans = 0;
    while(b>0){
        if(b&1){
            ans +=a;
        }
        a = a*2;
        b = b>>1;
    }
    return (ans+m)%m;
}

void sieve(){
    is_prime[0] = is_prime[1] = false;
    for(int i=2;i*i<=N;i++){
        if(is_prime[i]){
            prime.push_back(i);
            for(int j=i*i;j<=N;j=j+i){
                is_prime[j] = false;
            }
        }
    }
}

int find_number_of_divisor(int n,int p){
    int ans=0;
    if(p>n){
        return ans;
    }
    while(n%p==0){
        ans++;
        n = n/p;
    }
    return ans;
}

int main() {
    sieve();
    int t;cin>>t;
    while(t--){
        int t2;cin>>t2;
        vector<int> v;
        while(t2--){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ma = *max_element(v.begin(),v.end());
        int ans = 1;
        for(auto p:prime){
        if(p>ma){
                break;
            }
            int count = 1;
            for(int x:v){
                int c = find_number_of_divisor(x,p);
                count += c;
            }
            ans = multi(ans,count,M);
        }
        cout<<ans<<endl;
    }
}
