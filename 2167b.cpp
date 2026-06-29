#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int y;
    cin>>y;
    while(y--){
        int n;
        cin>>n;
        string s1 , s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if((s1.compare(s2))==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
