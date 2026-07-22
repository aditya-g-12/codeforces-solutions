#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int grabage;
        int sad =0 ;
        for(int i = 1 ; i < (n+1);i++){
            cin>>grabage;
            if(grabage==i){
                sad++;
            }
        }
        cout<<(sad/2)<<endl;
    }
}