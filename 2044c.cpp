#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int ans=0;
        int row1=min(m,a);
        int row2=min(m,b);
        ans+=row1+row2;
        int left=2*m-ans;
        ans+=min(left,c);
        cout<<ans<<endl;
    }
}