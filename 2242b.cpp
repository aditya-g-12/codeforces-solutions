#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i =0;i<n;i++){
            cin>>arr[i];
        }

        int leftbalance=0;
        int middlebalance=0;
        int smallest=1000000000;
        bool possible=false;
        for(int i =0;i<n-1;i++){

            if(arr[i]==1){
                leftbalance++;
            }
            else{
                leftbalance--;
            }

            if(arr[i]==3){
                middlebalance--;
            }
            else{
                middlebalance++;
            }

            if(smallest!=1000000000){
                if(middlebalance>=smallest){
                    possible=true;
                }
            }

           
            if(i<n-2){
                if(leftbalance>=0){
                    smallest=min(smallest,middlebalance);
                }
            }
        }

        if(possible){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
