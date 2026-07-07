#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int tt;
        int lar=0;
        for(int i =0;i<n;i++){
            cin>>tt;
            if(tt>lar){
                lar=tt;
            }
        }
        cout<<"                                  "<<(n*lar)<<endl;
    }
}