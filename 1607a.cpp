#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        string d;
        cin>>s>>d;
        int len = d.length();
        int a=s.find(d[0]);
        int b;
        int sum=0;
        for(int i =1 ; i<len;i++){
            b=s.find(d[i]);
            sum+=abs(a-b);
            a=b;
        }
        cout<<"                            "<<sum<<endl;
    }
}