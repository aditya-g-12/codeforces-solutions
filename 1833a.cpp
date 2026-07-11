#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string tem="";
        set <string> c;
        for(int i =0 ;  i<(n-1);i++){
            tem+=s[i];
            tem+=s[i+1];
            c.insert(tem);
            tem="";
        }
        cout<<c.size()<<endl;

    }
}