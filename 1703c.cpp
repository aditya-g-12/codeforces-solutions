#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int arr[a];
        for(int j=0;j<a;j++){
            cin>>arr[j];
        }
        for(int i =0 ;i<a;i++){
            int ll;
            cin>>ll;
            string s;
            cin>>s;
            for(int p=0;p<ll;p++){
                if(s[p]=='D'){
                    arr[i]++;
                    if(arr[i]==10){
                        arr[i]=0;
                    }
                }
                else{
                    arr[i]--;
                    if(arr[i]==-1){
                        arr[i]=9;
                    }
                }
            }
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}