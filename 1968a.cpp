#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    while(n--){
        int x,y;
        cin>>x;
        y=x-1;
        while(x%y!=0){
            y--;
        }
        cout<<y<<endl;

    }
}