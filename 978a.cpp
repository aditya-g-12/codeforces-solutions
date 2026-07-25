#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_set <int> ss;
    for(int i =n-1 ; i>0;i--){
        ss.emplace(s[i]);
    }
    for(int i :ss){
        cout<<*(ss.begin() +i)
    }
    
}