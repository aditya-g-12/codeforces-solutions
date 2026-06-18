#include<iostream>
using namespace std;
bool is_prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a;
    int b;
    cin >>a>>b;
    
    if(!is_prime(a)){    
        cout<<"NO";
        return 0;
    }
    if(!is_prime(b)){    
        cout<<"NO";
        return 0;
    }
    int scan=a+1;
    while(scan<b){
    if(is_prime(scan)){    
        cout<<"NO";
        return 0;
    }
    else{
        
        scan++;
    }
    }
    cout<<"YES";

}
