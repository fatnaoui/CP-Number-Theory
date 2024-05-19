#include <iostream>
#include <vector>
using namespace std;

#define INT_MAX 10000000

int main() {
    int m = INT_MAX;
    int n,k;
    cin>>n>>k;
    for(int i = 2;i*i<=k;i++){
        int occ =0;
        if(k%i == 0){
            while(k%i == 0){
                occ++;
                k = k/i;
            }
        int cnt =0;
        int p = i;
        while(p<=n){
            cnt += n/p;
            p = p*i;
        }
        m = min(m,cnt/occ);
        }
    }
    if(k>1){
        int cnt =0;
        int p = k;
        while(p<=n){
            cnt += n/p;
            p = p*k;
        }
        m = min(m,cnt);
    }
    if(m == INT_MAX){
        cout<<0;
    }
    else{
        cout<<m;
    }
}
