#include <iostream>
using namespace std;
int main (){
    int a;
    int b;
    cin>>a>>b;
    for (int ai=1;ai<(a+1);ai++){
        if(ai%2 ==1){
            for(int i=0;i<b;i++){    //line 1 and 3
            cout<<"#";
           }
           cout<<endl;
        }
        if(ai%4 ==2){
            for(int i=0;i<(b-1);i++){ //line 2
            cout<<".";
            }
            cout<<"#"<<endl;
        }
        if(ai%4 ==0){
            cout<<"#";
            for(int i=0;i<(b-1);i++){  //line 4
                cout<<".";
            }
            cout<<endl;
        }
    }
    

}
