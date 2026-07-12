#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    long long sum =6;
    int rest =0;
    if(n==1){
        cout<<"1";
    }
    else{
        if(n==2){
            cout<<"-1";
        }
        else{
            cout<<"1 2 3 ";
            rest = n-3;
            for(int i = 1 ; i<rest+1;i++){
                cout<<sum<<" ";
                sum+=sum;
            }
        }
        
    }
    cout<<endl;
}
    
}