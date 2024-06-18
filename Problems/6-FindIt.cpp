#include <iostream>
using namespace std;

#define N 100000
int ct[N] = {0};
int sum[N] = {0};

int main() {
    int n;
    cin>>n;
    for(int i = 0;i < n;i++){
        int a;
        cin>>a;
        ct[a]++;
    }
    for(int i=2;i<N;i++){
        for(int j=i;j<N;j+=i){
            sum[i]+=ct[j];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int k;
        cin>>k;
        cout<<sum[k]<<endl;
    }
   
}
