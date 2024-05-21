#include <iostream>
using namespace std;

int gcdd(int a,int b){
    return b==0?a:gcdd(b,a%b);
}

int main() {
    int a,b;
    cin>>a>>b;
    int gcd = gcdd(a,b);
    int lcd = (a*b)/gcd;
    cout<<gcd<<' '<<lcd;
}
