    #include<iostream>
    #include<vector>
    using namespace std;
    int main (){
        int n;
        cin>>n;
        int a1[n];
        int b1[n];
        for(int i=0;i<n;i++){
            cin>>a1[i];
            cin>>b1[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    continue;
                }
                if(a1[i]==b1[j]){
                    count++;
                }
            }
        }
        cout<<count;
    }