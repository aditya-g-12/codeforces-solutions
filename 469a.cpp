#include <iostream>
using namespace std;

int main() {
    int n;
    bool status =false;
    cin >> n;
    int count1;int count2;
    int arr[1000];
    cin>>count1;
    for(int i=0;i<count1;i++){
        cin>>arr[i];
    }
    cin>>count2;
    for(int i=0;i<count2;i++){
        cin>>arr[count1+i];
    }

    for(int j=1;j<(n+1);j++){
        for(int i=0;i<(count1+count2);i++){
            if(arr[i]==j){
                 status=true;
                break;
            }
            else{
                status=false;
            }
        } 
        if (status == false){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
}
