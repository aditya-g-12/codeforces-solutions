#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int a=n[0]-'0';
        int marker=1;
        while(marker<n.size()&&n[marker]=='0'){
            a*=10;
            marker++;
        }
        int b=0;
        for(int i=marker;i<n.size();i++){
             b=b*10+(n[i]-'0');
        }
       
        if(a>=b){
                cout<<"-1";
        }
        else{
            cout<<a<<" "<<b;
        }
        cout<<endl;
    }
}