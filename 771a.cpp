#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool found = false;
    
        vector<string> b(n);
        for(int i =0 ;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if((b[i][0] == b[i][1] and b[i][1]=='O') and !found){
                b[i][0]='+';
                b[i][1]='+';
                found=true;
            }
            if((b[i][3] == b[i][4] and b[i][3]=='O') and !found){
                b[i][3]='+';
                b[i][4]='+';
                found=true;
            }
        }
        if(found){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
        for(int i =0 ;i<n;i++){
            if(found){
            cout<<b[i]<<endl;
        }}
    }
