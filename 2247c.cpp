#include<iostream>
#include<vector>
using namespace std;
int main(){
    int l;
    cin>>l;
    while(l--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> d;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        if(a==b){
            cout<<0<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]!=b[i]){
                    d.push_back(i);
                }
            }

            int sum=0;
            int mismatchlen=d.size();
            for(int i=0;i<mismatchlen;i++){
                sum+=a[d[i]];
            }

            int ones=0;
            int onesb=0;

            for(int i=0;i<n;i++){
                ones+=a[i];
                onesb+=b[i];
            }

            if(ones==0 || onesb==n){
                cout<<"-1"<<endl;
            }
            else if(sum%2!=0){
                cout<<"1"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
        }
    }
}