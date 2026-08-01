#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int count=a;
        int leftb=b%3;
        count+=b/3;
        if(leftb==2){
            if (c>=2){
                count++;
                c-=2;
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }
        else if(leftb==1){
            if (c>=2){
                count++;
                c-=1;
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }
        if(c%3==0){
        count+=c/3;}
        else{
            count+=(c/3) +1;
        }
        cout<<count<<endl;
        
    }
}