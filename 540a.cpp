#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string inti,fina;
    cin>>inti>>fina;
    int answer=0;
    for(int i=0;i<n;i++){
        int a=inti[i]-'0';
        int b=fina[i]-'0';
        
        int d=abs(a-b);
        answer+=min(d,10-d);
    }
    cout<<answer<<endl;
    
}