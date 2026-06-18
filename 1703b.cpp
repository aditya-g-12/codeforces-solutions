#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    
    for(int i=0;i<n;i++){
        int len;
        int countt=0;
        
        cin>>len;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        char temp = '0';
        for(int j=0;j<len;j++){
            if(s[j]==temp){
                countt++;
            }
            else{
                countt+=2;
                temp=s[j];
            }
        }
        cout<<"----------------------------"<<countt<<endl;
    }
}