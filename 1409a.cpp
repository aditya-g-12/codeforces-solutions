#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,b;
    int subtract;
    for (int i=0;i<n;i++){
        cin>>a>>b;
        if((a-b)>0){
        subtract=a-b;
        }
        else{
        subtract=b-a;
        } 
        if(subtract%10==0){
            cout<<(subtract/10)<<endl;
        }
        else{
            cout<<((subtract/10)+1)<<endl;
        }
        

    }
}