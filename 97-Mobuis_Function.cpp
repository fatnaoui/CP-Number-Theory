#include <iostream>
#include <vector>

using namespace std;

const int N = 100000;
vector<int> v1(N+1,1);
vector<int> v2(N+1,0);
vector<int> v3(N+1,0);

void mobuis_function(){
    for(int i=2;i*i<=N;i++){
        if(v2[i]==0){
            for(int j=i;j<=N;j=j+i){
                v2[j]++;
                v1[j] *=i;
            }
        }
    }
    for(int i=2;i<=N;i++){
        if(v1[i]==i){
            if(v2[i]%2 ==1) v3[i] = -1;
            else v3[i] = 1;
        }
        else v3[i]=0;
    }
    v3[1]=1;
}

void solve(){
    mobuis_function();
}

int main() {
    solve();
    
    for(int i=1;i<30;i++){
        cout<<i<<" : "<<v3[i]<<endl;
    }
}
