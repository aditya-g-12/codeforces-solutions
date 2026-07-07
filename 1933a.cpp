#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int temp;
        int sum=0;
        for(int i =0 ;i<n;i++){
            cin>>temp;
            if(temp<0){
                temp= (-1 *temp);
            }
            sum+=temp;
        }
        cout<<"                "<<sum<<endl;
    }
}