#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int greatest=a[0];
    int lowest=a[0];
    int count=0;
    for (int i=1;i<n;i++){
        if(a[i]>greatest){
            greatest=a[i];
            count++;
        }
        if(a[i]<lowest){
            lowest=a[i];
            count++;
        }
    }
    cout<<count;
}