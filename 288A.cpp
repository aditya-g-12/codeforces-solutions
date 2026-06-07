#include <iostream>
using namespace std;
int main(){
    int x[4];
    cin>>x[0];
    cin>>x[1];
    cin>>x[2];
    cin>>x[3];
    int commoncount=0;
    for( int i=0;i<4;i++){
        for( int j=0;j<4;j++){
            if (i==j){
                continue;
            }
            if(x[i]==x[j]){
            commoncount++;
            }
    }
    }

    if(commoncount==0){
        cout<<0;
        return 0;
    }
    if(commoncount==4){
        cout<<2;
        return 0;
    }
    cout<<(commoncount/6)+1;
}   