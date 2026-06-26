#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        long long sum=0;
        while(n--){
            long long tem;
            cin>>tem;
            sum+=tem;
        }
        long long prood = sqrt(sum);
        long long prad = pow(prood,2);

        if(sum==prad){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
}