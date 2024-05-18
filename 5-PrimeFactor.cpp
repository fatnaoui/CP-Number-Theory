#include <iostream>
#include <vector>
using namespace std;

vector<pair<int,int>> PrimeFactor(int n){
    vector<pair<int,int>> v;
    for(int i = 2;i*i<=n;i++){
        if(n%i == 0){
            int c = 0;
            while(n%i == 0){
                c++;
                n = n/i;
            }
            v.push_back(make_pair(i,c));
        }
    }
    return v;
}
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> v = PrimeFactor(n);
    for(auto p:v){
        cout<<p.first<<'^'<<p.second<<endl;
    }
}
