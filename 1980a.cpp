#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string c;
        cin>>c;
        int e=0;
        int d[7]={0};
        for(int i=0;i<a;i++){
            d[c[i]-'A']++;
        }   
        for(int i=0;i<7;i++){
            if(d[i]<b){
                e+=(b-d[i]);
            }
        }
        cout<<e<<endl;
    }
}