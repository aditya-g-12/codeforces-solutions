#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int freq[26]={0};
        for(char c:s){
            freq[c-'a']++;
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            if(freq[i]>=2){
                cnt++;
            }
        }
        if(cnt>=2){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
}