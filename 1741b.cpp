#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool found=false;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=n-1;i>=0;i--){
            if(s.count(arr[i])){
                cout<<i+1<<endl;
                found=true;
                break;

            }
            s.insert(arr[i]);
        }    
        if(!found){
            cout<<0<<endl;
        }
    }
}