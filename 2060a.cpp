#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,d,e;
        cin>>a>>b>>d>>e;
        int c1 = a+b;
        int c2 = d-b;
        int c3 = e-d;
        cout<<"                           ";
        if(c1==c2 && c2==c3){
            cout<<3<<endl;
        }
        else if(c1==c2|| c1==c3|| c2==c3){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
        
    }
}