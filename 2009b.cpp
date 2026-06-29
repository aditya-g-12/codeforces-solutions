#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int arr[a];
        string s;
        for(int i=0;i<a;i++){
            cin>>s;
            for(int j=0;j<4;j++){
                if(s[j]=='#'){
                    arr[i]=j+1;
                    break;
                }
            }
        }
        for(int i=a;i>0;i--){
            cout<<arr[i-1]<<" ";
        }
        cout<<endl;
}
}