#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        int b=1e9;
        cin>>a;
        int violation=0;
        n--;
        while(n--){
            int temp;
            cin>>temp;
            if(temp<=a && temp<=b){
                if((b-temp)>(a-temp)){
                    a=temp;
                }
                else{
                    b=temp;
                }
            }
            else{
                if(temp>a && temp>b){
                    violation++;
                    if((temp-b)>(temp-a)){
                    b=temp;
                    }
                    else{
                    a=temp;
                    }
                }
                else{
                    if(temp>a){
                        b=temp;
                    }
                    else{
                        a=temp;
                    }
                }
            }
        }
    
        cout<<violation<<endl;
    }
}