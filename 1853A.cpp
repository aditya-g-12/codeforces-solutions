#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nt;
    cin >> nt;

    while (nt--) {
        int n;
        cin >> n;

        int a[n];
        bool sorted = true;

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (!sorted) {
            cout << 0 << endl;
            continue;
        }

        int mn = 1e9;

        for (int i = 0; i < n - 1; i++){
            mn = min(mn, a[i + 1] - a[i]);
        }

        cout << mn / 2 + 1 << endl;
    }

    return 0;
}