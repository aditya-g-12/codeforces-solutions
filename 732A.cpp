    #include<iostream>
    using namespace std;
    int main(){
        int k;
        int r;
        cin>>k>>r;
        int count =1;
        int testk=k;
        while (true){
            testk=count*k;
            if(testk%10==r or testk%10==0){
            cout<<count;
            return 0;
            }
            count++;    
        }
    }