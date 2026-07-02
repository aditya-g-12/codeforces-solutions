#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        int bestQuality=0;
        int ans=0;
        for(int i=1;i<=n;i++) {
            int a,b;
            cin>>a>>b;

            if (a<= 10&&b>bestQuality) {
                bestQuality=b;
                ans=i;
            }
        }

        cout<<ans<<endl;
    }
}