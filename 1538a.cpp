#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int smal=INT_MAX;
        int larg=INT_MIN;
        int temp;
        for(int i =0;i<n;i++){
            cin>>temp;
            v.push_back(temp);
            if(temp>larg){
                larg=temp;
            }
            if(temp<smal){
                smal=temp;
            }
        }
        int fin=0;
        auto i1 = find(v.begin(), v.end(), larg);
        auto i2 = find(v.begin(), v.end(), smal);
        int in1 = i1 - v.begin();
        int in2 = i2 - v.begin();
        if(in1 >= n/2){
            fin+=in1;
        }
        else{
            fin+=(n-in1);
        }
        if(in2 >= n/2){
            fin+=in2;
        }
        else{
            fin+=(n-in2);
        }
        cout<<"                                          "<<fin<<endl;
    }
}