#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int onecount=0;
        int zerocount=0;
        for(char c:s){
            if(c=='1'){
                onecount++;
            }
            else{
                zerocount++;
            }
        }
        if(onecount>zerocount){
            cout<<zerocount;
        }
        else{
            if(zerocount>onecount){
                cout<<onecount;
            }
            else{
                if(zerocount==onecount && zerocount==1){
                    cout<<"0";
                }
                else{
                    cout<<onecount-1;
                }
            }
        }
        cout<<endl;
    }
}