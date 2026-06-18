#include<iostream>
using namespace std;
 
int main(){
    int k;
    cin>>k;
 
    for(int kk=0;kk<k;kk++){
        int n;
        cin>>n;
 
        int dotcount=0;
        string s;
        cin>>s;
 
        int finalcount=0;
        bool found = false;  
 
        for(int i=0;i<n;i++){
 
            if(s[i]=='.'){
                dotcount++;
            }
 
            if(dotcount>2){
                found = true; 
                break;
            }
 
            if(s[i]=='#'){
                finalcount += dotcount;
                dotcount = 0;
            }
        }
 
        if(found){            
            cout << 2 << endl;
            continue;
        }
 
        finalcount += dotcount;
        cout << finalcount << endl;
    }
}