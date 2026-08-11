#include <iostream>
#include <vector>
using namespace std ;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>a[i];

        if(i==n-1 || a[i+1]==1){
            ans.push_back(a[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(int x:ans){
        cout<<x<<" ";
    }

    return 0;
}