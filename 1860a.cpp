#include<iostream>
#include<vector>
using namespace std;
void converter(int k){
    int num=1;
    while (k > 0) {
        if (num % 3 != 0 && num % 10 != 3)
            k--;
        num++;
    }
    cout<<num-1<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        converter(k);
    }
}