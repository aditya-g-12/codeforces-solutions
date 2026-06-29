#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        cout<<((int)s[a-1])-96<<endl;
    }
}