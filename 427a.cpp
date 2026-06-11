#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main (){
    int n;
    string s;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    int digit=0;
    for (int i=0;i<n;i++){
        digit=a[i]+digit;
        if(digit<0){
            count++;
            digit=0;
        }
    }
    cout<<count;
}    