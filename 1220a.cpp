#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char garbage;
    int zcount=0;
    int ncount=0;
    for(int i =0 ; i<n;i++){
        cin>>garbage;
        if(garbage=='z'){
            zcount++;
        }
        if(garbage=='n'){
            ncount++;
        }
        
        
}
        while(zcount--){
            cout<<"0 ";
        }
        while(ncount--){
            cout<<"1 ";
        }
        cout<<endl;
}