#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> s(n);
        for(int i=0; i<n; i++){
            cin >> s[i];
        }
        long long count = 0;
        unordered_map<int,int> freq;
        vector<int> value(n-4);
        for(int x=0; x<=n-5; x++){
            value[x] = s[x] + s[x+2] - s[x+4];
            count += freq[value[x]];
            freq[value[x]]++;
        }
        for(int x=0; x<=n-5; x++){
            if(x+2 <= n-5 && value[x] == value[x+2]){
                count--;
            }
            if(x+4 <= n-5 && value[x] == value[x+4]){
                count--;
            }
        }
        cout << count << endl;
    }
}