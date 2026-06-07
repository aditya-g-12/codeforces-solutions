#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    int value=1;
    for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        if(v[i]==value){
            cout<<i+1<<" ";
            value++;
        }
    }
}
}