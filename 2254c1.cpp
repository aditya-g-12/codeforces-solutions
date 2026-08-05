#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n ;
        cin>>n;
        string a1,a2;
        cin>>a1>>a2;
        int evena1=0;
        int evena2=0;
        int odda1=0;
        int odda2=0;
        if(n<3){
            if(a1==a2){
            cout<<"YES";}
            else{
            cout<<"NO";}
            cout<<endl;
            continue;
            }


        for(int i=0;i<n;i++){
            if(i%2==0 ){
                if(a1[i]=='1'){
                evena1++;}
            }
            else{
                if(a1[i]=='1'){
                odda1++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==0 ){
                if(a2[i]=='1'){
                evena2++;}
            }
            else{
                if(a2[i]=='1'){
                odda2++;
                }
            }
        } 
        if((evena1==evena2 )&&(odda1==odda2)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
}