#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

#define v vector<int> 
int x,y;
void euclid(int a,int b){
    if(b==0){
        x = 1;
        y = 0;
        return ;
    }
    euclid(b,a%b);
    int cx = y;
    int cy = x-(a/b)*y;
    x = cx;
    y = cy;
}

int main() {
    v modulo = {2,7,3};
    v rest = {1,5,2};
    int prod = accumulate(modulo.begin(), modulo.end(), 1, multiplies<int>());
    int ans = 0;
    for(int i=0;i<modulo.size();i++){
        int pp = prod/modulo[i];
        euclid(pp,modulo[i]);
        ans += (rest[i]*pp*x) % prod;
    }
    cout<<(ans+prod)%prod;
}