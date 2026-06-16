#include<iostream>
using namespace std;

bool is_composite(int k){
    for(int i=(k-1);i>1;i--){
        if(k%i==0){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int a=n;
    for(int i=1;i<n;i++){
        if(is_composite(a-i)&&is_composite(i)){
            cout<<a-i<<" "<<i;
            return 0;
        }
    }
}