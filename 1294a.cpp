#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int largest = max(a, max(b, c));
        int needed = (3*largest)-(a+b+c);
        if(n<needed){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            n-=needed;
        }
        if(n%3==0){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}