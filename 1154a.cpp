#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x[4];
    cin>>x[0]>>x[1]>>x[2]>>x[3];
    int most=max({x[0],x[1],x[2],x[3]});
    int v[4];
    for(int i=0;i<4;i++){
        if(x[i]==most){
            continue;
        }
        else{
            v[i]=most-x[i];
        }
    }
    for(int i=0;i<4;i++){
        if(x[i]==most){
            continue;
        }
        cout<<v[i]<<" ";
    }
}