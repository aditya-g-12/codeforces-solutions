    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        while(n--){
            int a;
            cin>>a;
            string s;
            cin>>s;
            int ccount=0;
            int temp = s[0];   
            for(int i=1;i<a;i++){
                if(s[i]!=temp){
                
                ccount++;
                }
                temp=s[i];
            }
            if(ccount==1){
                cout<<"2"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }
        }
    }