#include <iostream>
#include<string>
using namespace std;
int main(){
    int first,second,third,fourth;
    cin >> first >>second>>third>>fourth;
    int cal=0;
    string s;
    cin>>s;
    for( int i=0; i< (s.length());i++){
        if (s[i]=='1'){
            cal+=first;
        }
        if (s[i]=='2'){
            cal+=second;
        }
        if (s[i]=='3'){
            cal+=third;
        }
        if (s[i]=='4'){
            cal+=fourth;
        }
    }
    cout<<cal;
}