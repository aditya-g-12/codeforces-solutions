#include <iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    int n;
    for (int i=0;i<t;i++){
        cin>>n;
        if(n<2){
            cout<<"0"<<endl;
            return 0;
        }
        if(n%2==0){
            cout<<((n/2)-1);
        }
        else{
            cout<<((n/2));
        }
        cout<<endl;
    }
}