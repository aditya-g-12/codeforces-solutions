#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int sum=0;
        sum=10*((a%10)-1);
        if(a/10==0){
            sum++;
        }
        else if(a/100==0){
            sum+=3;
        }
        else if(a/1000==0){
            sum+=6;
        }
        else
        sum+=10;
    cout<<sum<<endl;  
    }
}