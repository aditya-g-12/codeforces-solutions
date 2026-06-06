#include <iostream>
#include <vector>
#include<string>
using namespace std;
int main()
{
    int i;
    cin >> i;
    string input[i];
    for (int k=0;i>k;k++){
        cin >> input[k];
        if(input[k].size()>10){
            cout << input[k][0];
            cout << ((input[k].size())-2);
            cout << input[k][((input[k].size())-1)]<< endl;
        }
        else{
            cout << input[k]<< endl;
        }
    }
 

    return 0;
}