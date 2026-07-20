#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool ugly = false;
        bool same=true;
        cin>>arr[0];
        int sum = arr[0];
        for(int i =1 ; i<n;i++){
            cin>>arr[i];
            if((sum)==arr[i]){
                    ugly = true;
            }
            sum+=arr[i];
            if(arr[0]!=arr[i]){
                same =false;
            }
        }
        if(same){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        if(ugly){
            
            sort(arr,arr+n,std::greater<int>());
        }
        if (arr[0] == arr[1]) {
            swap(arr[1], arr[n-1]);
        }
         for(int i =0 ; i<n;i++){
            cout<<arr[i]<<" ";
         }
         cout<<endl;
    }
}