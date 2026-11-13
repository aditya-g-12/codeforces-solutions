#include<iostream>
#include<string>
using namespace std;
int main(){
    bool found=false;
    int foundindex=0;
    bool problem= false;
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    string s2;
    cin>>s2;
    int lena=s.length();
    int lenb=s2.length();
    for(int i=lena+1;i>=0;i--){
        if(s[i]==s2[lenb-1]){
            lenb--;
            if(!found){
                foundindex=i;
                found=true;
            }
        }
    }
    for(int i=foundindex+1;i<lena;i++){
        for(int j=0;j<lena;j++){
            if(s[i]==s2[j]){
                problem=true;
            }

        }
    }
    if(lenb>0 or problem){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    cout<<endl;
}
}