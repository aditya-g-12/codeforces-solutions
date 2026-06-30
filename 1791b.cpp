#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        string s;
        cin>>a>>s;
        int x=0;
        int y=0;
        bool founds=false;
        for( int i=0 ;i<a;i++){
            if(s[i]=='U')
            y++;
            if(s[i]=='D')
            y--;
            if(s[i]=='L')
            x--;
            if(s[i]=='R')
            x++;

            if(x==1 && y==1){
                founds=true;
                cout<<"YES\n";
                break;
            }
        }
        if(!founds){
            cout<<"NO\n";
        }
    }
}