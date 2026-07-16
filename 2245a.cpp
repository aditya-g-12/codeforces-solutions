#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        if(2*k > n){
            cout<<-1<<endl;
            continue;
        }    
        for(int i=0; i<k; i++){
            if(s[i]=='L'){
                count++;
            }
        }
        for(int i=n-1; i>=n-k; i--){
            if(s[i]=='R'){
                count++;
            }
        }
        cout<<count<<endl;
    }
}