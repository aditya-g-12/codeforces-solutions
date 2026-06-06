#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    string k;
    cin>>k;
    int i=0;
    int A_count=0;
    while(i<n){
        if(k[i]=='A'){
            A_count++;
        }
        i++;
    }

    if(A_count>(n-A_count)){
        cout<<"Anton";
    }
    else if ((n-A_count)>A_count){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
return 0;
}