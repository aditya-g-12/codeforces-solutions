#include<iostream>
#include<map>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s1,s2;
        cin>>s1>>s2;

        map<char,int>mp;

        for(char c:s1)mp[c]++;
        for(char c:s2)mp[c]++;

        int total=0,mx=0;

        for(auto x:mp){
            int moves=(x.second+1)/2;
            total+=moves;
            mx=max(mx,moves);
        }

        cout<<total-mx<<endl;
    }
}