#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int sum=0;
        int arr[a-1];
        for( int i=0 ; i<(a-1);i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        cout<<-sum<<endl;
    }
}