#include <iostream>
#include <vector>
using namespace std;

const int n = 100000;
vector<int> v;
vector<bool> vb(n+1,true);

void sieve(){
    vb[1]=vb[0]=false;
    for(int i=2;i*i<=n;i++){
        if(vb[i]){
            for(int j=i*i;j<=n;j=j+i){
                vb[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(vb[i]){
            v.push_back(i);
        }
    }
}

vector<pair<int,int>> factors(vector<int> v,int n){
    vector<pair<int,int>> vv;
    for(int i=0;v[i]*v[i]<=n;i++){
        if(n%v[i] == 0){
            int c = 0;
            while(n%v[i] == 0){
                c++;
                n = n/v[i];
            }
        vv.push_back(make_pair(v[i],c));
        }
    }
    return vv;
}

int main() {
    sieve();
    int m;
    cin>>m;
    vector<pair<int,int>> fac=factors(v, m);
    for(auto p:fac){
        cout<<p.first<<'^'<<p.second<<endl;
    }
}
