#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,c;
        scanf("%lld %lld",&n,&c);
        vector<long long> a(n);
        long long add=0;

        for(int i=0;i<n;i++){
             scanf("%lld",&a[i]); add+=a[i];
            }
        long long S0 = add - c*n;
        sort(a.begin(), a.end());
        long long max_pairs = n/2;
        long long Faida=0;
        for(long long i=0;i<max_pairs;i++){
                if(a[i]<c){
                 Faida+=c-a[i];
                }
                else{ 
                    break;
                }
        }
        printf("%lld\n", S0+Faida);
    }
}
 