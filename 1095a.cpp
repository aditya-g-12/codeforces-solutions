#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    int jump = 0;
    cin>>s;
    for(int i =1 ; jump<n;i++){
        cout<<s[jump];
        jump +=i;
    }
}