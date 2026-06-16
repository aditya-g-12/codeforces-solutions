#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s="codeforces";
    for(int i=0;i<n;i++){
        string g;
        cin>>g;
        int count =0;
        for(int j=0;j<10;j++){
            if(s[j]==g[j]){
                continue;
            }
            else{
                count++;
            }
        }
        cout<<count<<endl;
    }
}