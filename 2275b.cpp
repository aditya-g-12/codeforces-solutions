#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    stack <int> st;
    string s;
    cin>>s;
    int count=0;
    vector<bool> printed(n+1);
    for(int i=0;i<n;i++){
        
        if(s[i]=='1'){
            st.push(i+1);
        }
        else{
            if(s[i] == '2') {
                if(!st.empty()) {
                int ttop = st.top();
                st.pop();
                printed[ttop] = true;
                }
                else {
                printed[i + 1] = true;
                }
            }
            else{
                if(s[i]=='3'){
                    printed[i+1]=true;
                }
            }
        }
        }   
    
    for(int i=1; i<=n; i++){
        if(printed[i]==false){
            count++;
        }
    }
    cout<<count<<endl;
    for(int i=1;i<=n;i++){
        if(printed[i]==false){
            cout<<i<<" ";
        }   
    }
    cout<<endl;
}
}