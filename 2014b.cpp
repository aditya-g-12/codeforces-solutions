#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k%4==0){
            cout<<"YES";
        }
        else{
            if(k%4==2){
                cout<<"NO";
            }
            else{
                if(k%4==1){
                    if(n%2==0){
                        cout<<"YES";
                    }
                    else{
                        cout<<"NO";
                    }
                }
                else{
                    if(n%2!=0){
                        cout<<"YES";
                    }
                    else{
                        cout<<"NO";
                    }
                }
            }
        }
        cout<<endl;

    }
}