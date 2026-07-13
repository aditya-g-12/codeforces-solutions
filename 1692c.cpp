 #include<iostream>
 using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int found = false;
        int summ=0;
        int hashpos=0;
        bool started=false;
        for(int i =0 ; i<8;i++){
            cin>>s;
            for(int j =0 ; j<8;j++){
                summ+=s[j];
                if(s[j]=='#'){
                    hashpos=j;
                }
            }
            if(summ == 346 && !started){
                started=true;
            }
            if(summ == 357 && started && !found){
                cout<<(i+1)<<" "<<hashpos+1<<endl;
                found = true;
            }
            summ=0;
        }
    }
 }