#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a ; int b;
    cin>>a>>b;
    char arr[a][b];
    bool is_color = false;
    for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
            cin>>arr[i][j];
            if(arr[i][j] == 'C' or arr[i][j] == 'M' or arr[i][j] == 'Y' ){
                is_color=true;
                break;
            }
        } 
        if(is_color){
            break;
        }
    }
    if(is_color){
        cout<<"#Color"<<endl;
    }
    else{
        cout<<"#Black&White"<<endl;
    }
}