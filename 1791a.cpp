#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char cc;
    for(int i=0; i<n;i++){
        cin>>cc;
        if(cc=='c'||cc=='o'||cc=='d'||cc=='e'||cc=='f'||cc=='r'||cc=='s'){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}