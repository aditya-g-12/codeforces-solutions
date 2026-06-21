#include<iostream>
#include<string>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
    int a,b;
    cin>>a>>b;
    string s;
    string t;
    cin>>s>>t;
    int ans = 0;
    while (a < b) {   
        s += s;
        a *= 2;
        ans++;
    }
    if (s.find(t) != string::npos)  
    cout << ans<<endl;
    else {
        s += s;
        ans++;
        if (s.find(t) != string::npos)
            cout << ans<<endl;
        else
            cout << -1<<endl;
    }
}
}