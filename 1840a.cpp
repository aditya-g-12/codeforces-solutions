#include<iostream>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char target = s[0];
        for(int i =1 ;i<n;i++){
            if(s[i]==target){
                cout<<target;
                if(i+1<n){
                target=s[i+1];
                i++;
                }
                }
            }
        cout<<endl;
    }

}
