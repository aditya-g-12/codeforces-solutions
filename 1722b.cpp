#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        string a;
        string b;
        cin>>a>>b;
        bool correct = true;
        for(int i=0;i<n;i++){
            if((a[i]=='R' && b[i]=='R') or (a[i]!='R' && b[i]!='R' )){
                continue;
            }
            else{
                correct=false;
                break;
            }
            
        }
        if(correct){
                cout<<"YES"<<endl;
            }
        else
        cout<<"NO"<<endl;
    }

}