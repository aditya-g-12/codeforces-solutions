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
        int twocount=0;
        for(int i=0;i<a;i++){
            cin>>arr[i];
            if(arr[i]==2){
                twocount++;
            }
        }
        if(twocount %2 != 0){ 
            cout<<"-1"<<endl;
            continue;
        }
        if (twocount == 0) {
            cout << 1 << endl;
            continue;
        }
        
        int need=twocount/2;
        int cnt=0;

        for (int i=0;i<a;i++) {
            if (arr[i]==2)
                cnt++;
            if (cnt==need) {
                cout<<i+1<<endl;
                break;
            }   
        }        
    }
}