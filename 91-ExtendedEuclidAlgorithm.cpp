#include <iostream>
using namespace std;

int x,y,gcd;
void ExtendedEuclidAlgorithm(int a,int b){
    if(b==0){
        x = 1;
        y = 0;
        gcd = a;
        return;
    }
    ExtendedEuclidAlgorithm(b,a%b);
    int cx = y;
    int cy = x-(a/b)*y;
    x = cx;
    y = cy;
}

int main() {
    // 18x+30y=6
    ExtendedEuclidAlgorithm(18,30);
    cout<<x<<' '<<y;
}
