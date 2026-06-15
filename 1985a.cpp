#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        string s1;
        string s2;
        cin>>s1>>s2;
        char s = s2[0];
        s2[0]=s1[0];
        s1[0]=s;
        cout<<s1<<" "<<s2<<endl;
    }
}