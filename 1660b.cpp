#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        if(n==1){
            cout<<"YES\n";
            continue;
        }
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(*(v.end()-1)-*(v.end()-2)>1){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
    }
}