#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char b;
        int n;
        cin>>b>>n;
        for(int i = 1;i<9;i++){
            if(i==n){
                continue;
            }
            cout<<b<<i<<endl;
        }
        for(char c = 'a'; c <'i';c++){
            if(c== b){
                continue;
            }
            cout<<c<<n<<endl;
        }
        

    }
}