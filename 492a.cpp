#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 1;
    int ans = 0;
    while (true) {
        int need = (count * (count + 1)) / 2;
        if (n >= need) {
            n -= need;
            ans++;
            count++;
        }
        else {
            break;
        }
    }

    cout << ans;
}