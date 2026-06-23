#include<iostream>
#include<set>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        set<int> s;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            s.insert(arr[i]);
        }

        sort(arr, arr + n);

        if(s.size() > 2){
            cout << "NO" << endl;
            continue;
        }

        if(s.size() == 1){
            cout << "YES" << endl;
            continue;
        }

        int acount = 1;
        bool stats = false;
        int fixedacount = 0;
        int fixedbcount = 0;

        for(int i = 0; i < n - 1; i++){
            if(arr[i] == arr[i + 1]){
                acount++;
            }
            else{
                if(!stats){
                    fixedacount = acount;
                    stats = true;
                }
                acount = 1;
            }
        }

        fixedbcount = acount;

        if(abs(fixedacount - fixedbcount) <= 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}