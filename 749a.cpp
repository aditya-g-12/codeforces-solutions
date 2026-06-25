#include<iostream>
using namespace std;
void twoprinter(int s){
    while(s--){
        cout<<2<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    cout<<(n/2)<<endl;
    if(n%2==0){
        twoprinter((n/2));
    }
    else{
        twoprinter((n/2)-1);
        cout<<"3";
    }
}