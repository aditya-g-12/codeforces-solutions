#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> programmer;
    vector<int> maths;
    vector<int> pe;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            programmer.push_back(i);
        }
        if(arr[i]==2){
            maths.push_back(i);
        }
        if(arr[i]==3){
            pe.push_back(i);
        }
        
    }
    int minn= min(programmer.size(), min(pe.size(), maths.size()));
    cout<<minn<<endl;
    for(int i=0;i<minn;i++){
        cout<<programmer[i]+1<<" ";
        cout<<maths[i]+1<<" ";
        cout<<pe[i]+1<<endl;
    }

}
