#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3,a4,b1,b2,b3,b4;
        cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
        int adist;
        int bdist;
        if(a1==a2){
            adist=abs(b2-b1);
            bdist=abs(b3-b4);
        }
        else{
            if(a1==a3){
                adist=abs(b1-b3);
                bdist=abs(b2-b4);
            }
            else{
                adist=abs(b4-b1);
                bdist=abs(b2-b3);
            }
        }
        
        cout<<(adist*bdist)<<endl;
        

    }
}