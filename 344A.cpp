#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int count=0;
    int save;
    int j;
    for(int i=0;i<n;i++){
        cin>>j;
        if (i==0){
            save=j%10;
        continue;}
       if((save+(j/10))!=1){
            save=j%10;
            count++;
    }}
    cout<<count+1;
}