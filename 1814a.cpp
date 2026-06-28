#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        if (k % 2 == 0) {
                cout << "NO"<<endl;
        } 
        else {
            if (n >= k){
                cout << "YES"<<endl;
            }
            else{
                cout << "NO"<<endl;
            }
    }
}
}