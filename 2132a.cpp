#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string result="";
    int an,bn;
    string a,b,player;
    cin>>an>>a>>bn>>b>>player;
    string v="";
    string d="";
    for(int i=0;i<bn;i++){
        if(player[i]=='D'){
            d+=b[i];
        }
        else{
            v+=b[i];
        }
    }
    reverse(v.begin(), v.end());
    result+=v;
    result+=a;
    result+=d;
    cout<<result<<endl;

    }
}