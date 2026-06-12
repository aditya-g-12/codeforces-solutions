#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    for (int i=0;i<n;i++){
        cin>>s;
        int sum1=(int)s[0]+(int)s[1]+(int)s[2];
        int sum2=(int)s[3]+(int)s[4]+(int)s[5];
        if(sum1==sum2)
            cout<<"YES"<<endl;
        
        else{
            cout<<"NO"<<endl;
        }
    }
}