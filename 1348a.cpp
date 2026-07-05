#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double pile1 = pow(2,n);
        double pile2 =0;
        for(int i =1 ; i<=(n/2)-1;i++){
            pile1+=pow(2,i);
        }
        for(int i=(n/2);i<=n-1;i++){
            pile2+=pow(2,i);
        }
        cout<<(abs(pile1-pile2))<<endl;
        
    }
}