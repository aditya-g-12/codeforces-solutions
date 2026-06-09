#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string c;
    getline(cin, c);
    string d="";
    int clength=c.length();
    for (int i = 1; i < clength; i += 3) {
        if ('a' <= c[i] && c[i] <= 'z'){
            d += c[i];
        }
    }
    int dlength=d.length();
    set<char> dset;
    for(int i=0;i<dlength;i++){
     dset.insert(d[i]);
    }
    cout << dset.size();
}