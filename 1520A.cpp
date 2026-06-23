    #include<iostream>
    #include<string>
    using namespace std;
    int main(){
        int nn;
        cin>>nn;
        while(nn--){
            int n;
            cin>>n;
            string s;
            cin>>s;
            bool broken=false;
            for(int i=0;i<n;i++){
                
                char teap = s[i];
                
                if(s.find(teap,i+1)==string::npos){
                    continue;
                }
                int pos = s.find(teap,i+1);
                if(pos!=i+1){
                    cout<<"NO"<<endl;
                    broken=true;
                }
            }
            if(!broken){
                cout<<"YES"<<endl;
            }
            
        }
    }