#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    int count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<t;i+=2){
        count+=v[i+1]-v[i];
    }
    cout<<count<<endl;
}