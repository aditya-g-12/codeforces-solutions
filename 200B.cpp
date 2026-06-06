#include <iostream>
#include<iomanip>
using namespace std;
int main (){
    int n;
    cin>>n;
    int sum=0;
    int t;
    for ( int i=0;i<n;i++){
        cin>>t;
        sum=sum+t;
    }
    double output=(double)sum/(double)n;
    cout << fixed << setprecision(12) << output;

}