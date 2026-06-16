#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int maxx=max(a,b);
    int fav = 7-maxx;
    int g = __gcd(6, fav);
    cout << fav / g << "/" << 6 / g;

}