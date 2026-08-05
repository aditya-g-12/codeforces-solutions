#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0;
        char targer;
        int count=0;
        while(i<n){
            if(i==0){
                count++;
                targer=s[0];
                i++;
            }
            else{
                if(s[i]==targer){
                    i++;
                }
                else{
                    count++;
                    targer=s[i];
                    i++;
                }
            }
        }
        int best=0;
        for(int i=1;i<n-1;i++){
            if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                if(s[i-1]==s[i+1])
                best=max(best,2);
            else
            best=max(best,1);
            }
        }   
        cout<<count-best<<endl;
    }
}