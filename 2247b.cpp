#include<iostream>
using namespace std;
int main(){
    int l;
    cin>>l;
    while(l--){
        int n,k,m;
        cin>>n>>k>>m;
        if(k>m){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i =0 ; i<(k-1);i++){
                cout<<"1"<<" ";
            }
            cout<<(m-(k-1))<<" ";
            for(int i =0 ; i<(n-k);i++){
                cout<<"1"<<" ";
            }
        }
        cout<<endl;
    }
}