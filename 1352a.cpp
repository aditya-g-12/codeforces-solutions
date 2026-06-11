#include<iostream>
#include<vector>
#include<string>
using namespace std;
void zeroprinter(int pos){
    for ( int i=0;i<pos;i++){
    cout<<"0";
    }    
}

int main (){
    int n;
    string s;
    cin >> n;
    for (int i=0;i<n;i++){
        cin>>s;
        int length = s.length();
        int a1[length];
        for (int j=0;j<length;j++){
            a1[j]=(int)s[j]-'0';
        }                                 //array converter
    
    int k=0;
    for(int i1=0;i1<length;i1++){
        if(a1[i1]!=0){
            k++;
        }
    }
    cout<<k<<endl;              //cut value printer
    for(int i1=0;i1<length;i1++){
        if(a1[i1]!=0){
            cout<<a1[i1];
            zeroprinter(length-1-i1);
            cout<<" ";
        }
    }

}}