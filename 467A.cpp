#include<iostream>
using namespace std;
int main(){
    int no_of_dorms;
    cin>>no_of_dorms;
    int count=0;
    for(int i=0;i<no_of_dorms;i++){
        int p;
        int q;
        cin>>p>>q;
        if((q-p)>1){
            count++;
        }
        
    }
    cout<<count;
}