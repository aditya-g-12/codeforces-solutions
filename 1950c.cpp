#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int h, m;
        char colon;
        cin>>h>>colon>>m;
        string period;
        if (h==0) {
            h=12;
            period="AM";
        }
        else if(h<12) {
            period="AM";
        }
        else if(h==12) {
            period="PM";
        }
        else{
            h-=12;
            period="PM";
        }
        string hour=to_string(h);
        string minute=to_string(m);
        if(h<10)
            hour="0"+hour;
        if(m<10)
            minute ="0"+ minute;
        cout<<hour<<":"<<minute<<" "<<period<<endl;
    }

    return 0;
}