#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int min1=min(a,b);
        int max1=max(a,b);
        int min2=min(c,d);
        int max2=max(c,d);
        if(min2>max1 or min1>max2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}