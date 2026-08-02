#include<iostream>
#include<vector>
using namespace std;
int main(){
        int r,c;
        cin>>r>>c;
        char grid[r][c];
        bool rowHasS[r]={0};
        bool colHasS[c]={0};
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>grid[i][j];
                if(grid[i][j]=='S'){
                    rowHasS[i]=true;
                    colHasS[j]=true;
                }
            }
        }
    int ans=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(!rowHasS[i]||!colHasS[j]){
                ans++;
            }
        }
    }
    cout<<ans;
}