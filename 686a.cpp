#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int ice ;
    cin>>ice;
    int sad = 0;
    while(a--){
        char manus;
        int val;
        cin>>manus>>val;
        if(manus=='+'){
            ice+=val;
        }
        else{
            if(val>ice){
                sad++;
                continue;
            }
            else{
                ice-=val;
            }
        }
    }
    cout<<ice<<" "<<sad<<endl;
}