#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(101,0);
    
    for(int i =0 ; i<n;i++){
        int x;
        cin>>x;
        v[x]++;
    }
    sort(v.begin(),v.end());
    cout<<*(v.end()-1)<<endl;

}