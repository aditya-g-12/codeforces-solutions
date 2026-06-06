#include<iostream>
#include<string>
using namespace std;
int main(){
    int no_of_people;
    cin>>no_of_people;
    int time;
    cin>>time;
    string q;
    cin>>q;
    for(int j=0;j<time;j++){
    for(int i=0;i<no_of_people;i++){
        if(q[i]=='B'&&q[i+1]=='G'){
            q[i+1]='B';
            q[i]='G';
            i++;
        }
    }}
    cout<<q;
}