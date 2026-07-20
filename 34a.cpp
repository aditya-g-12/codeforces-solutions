#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        int temp0;
        int shortest = 1000000;
        int tempa;
        int tempb;
        cin>>tempa;
        temp0=tempa;
        int shortestindex=0;
        for(int i =1 ; i<n;i++){
            cin>>tempb;
            if(abs(tempb-tempa)<shortest){
                shortest = abs(tempb-tempa);
                shortestindex=i;
            }
            tempa=tempb;
        }
        if(abs(tempa-temp0)<shortest){
            cout<<n<<" "<<1<<endl;
        }
        else{
            cout<<shortestindex-1<<" "<<shortestindex<<endl;
        }

  }