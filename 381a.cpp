#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    int total=0;
    for (int i=0 ;i<n;i++){
        total+=arr[i];
    }
    int maxx=0;
    int serja=0;
    int left = 0;
    int right = n - 1;
    int count=1;
    for (int i=0 ;i<n;i++){
        
        if(arr[left]>arr[right]){
            maxx=arr[left];
            left++;
            count++;
        }
        else{
            maxx=arr[right];
            right--;
            count++;
        }
        if(count%2==0){
            serja+=maxx;
        }
    }
    cout<< serja <<" "<< total-serja;
}