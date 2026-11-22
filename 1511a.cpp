#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int u1=0,d1=0,u2=0,d2=0,ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1){
                u1++;
                ans++;
            }
            else if(x==2){
                d1++;
            }
            else{
                if(u1>=d1){
                    u1++;
                    ans++;
                }
                else if(u2>=d2){
                    u2++;
                    ans++;
                }
                else{
                    d1++;
                }
            }
        }
        cout<<ans<<"\n";
    }
}