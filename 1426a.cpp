#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,k;
        cin>>a>>k;
        if(a<3){
            cout<<"1"<<endl;
            continue;
        }
        cout <<((a-3)/k )+2<< endl;
    }
}