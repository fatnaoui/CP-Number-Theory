#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int n){
    vector<bool> bo(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(bo[i]){
            for(int j=i*i;j<=n;j=j+i){
                bo[j]=false;
            }
        }
    }
    bo[1]=bo[0]=false;
    return bo;
}

int pu(vector<bool> b,int n){
    int ans = 1;
    for(int i=2;i*i<=n;i++){
        if(b[i]){
        if(n%i == 0){
            int c = 0;
            while(n%i == 0){
                c++;
                n = n/i;
            }
            ans = ans*(c+1);
        }
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<bool> b = sieve(n);
    int ans = pu(b,n);
    cout<<ans;
}
