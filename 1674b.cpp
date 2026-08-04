#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char x,y;
        cin>>x>>y;
        int value = 25*(x-'a');
        if(y>x){
            value++;
        }
        value += (y-'a');
        cout<<value<<endl;
    }
}