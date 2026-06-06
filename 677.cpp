    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
    int n;
    int h;
    cin>>n>>h;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[n];
        if (arr[n]>h){
            count++;
        }
    }
    cout<<(n+count);
    }