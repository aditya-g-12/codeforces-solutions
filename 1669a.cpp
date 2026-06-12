#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int rating;
    for(int i=0;i<n;i++){
    cin>>rating;
    if(1899<rating){
        cout<<"Division 1"<<endl;
    }
    if(1599<rating && rating<1900){
        cout<<"Division 2"<<endl;
    }
    if(1399<rating && rating<1600){
        cout<<"Division 3"<<endl;
    }
    if(rating<1400){
        cout<<"Division 4"<<endl;
    }
    }
}