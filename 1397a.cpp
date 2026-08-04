#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        bool err=false;
        vector<int> v(26,0);
        for(int i=0;i<n;i++){
            string t;
            cin>>t;
            for(char c:t){
                v[c -'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if( v[i] %n !=0){
                err = true;
                break;
            }
        }
        if(err){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
}