#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            if(a>b){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
            continue;
        }
        else{
            if(a==b){
                cout<<"First"<<endl;
                continue;
            }
            b--;
            
            if(a>b){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
            continue;
        }
    }

}