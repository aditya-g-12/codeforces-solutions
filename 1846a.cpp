#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        
        int count = 0;
        while(n--){
            cin>>a>>b;
            if(a>b){
                count++;
            }
        }
        cout<<count<<endl;
    }
}