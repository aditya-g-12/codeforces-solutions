#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main (){
    int k;int l;int m;int n;int d;
    cin>>k>>l>>m>>n>>d;
    int count=0;
    for (int i=1;i<d+1;i++){
        if(i%k==0 or i%l==0 or i%m==0 or i%n==0){
            count++;
        }
    }  
    cout<<(count);

}