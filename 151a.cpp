#include<iostream>
using namespace std;
int main(){
    int friends;
    int bottles;
    int drinkperbottle;
    int lemon;
    int sliceperlemon;
    int salt;
    int drink_needed;
    int salt_needed;
    cin>>friends>>bottles>>drinkperbottle>>lemon>>sliceperlemon>>salt>>drink_needed>>salt_needed;
    int total_slices = lemon*sliceperlemon;
    int total_drink = bottles*drinkperbottle;
    int c1=(total_drink/(drink_needed*friends));
    int c2=(salt/(salt_needed*friends));
    int c3= (total_slices/friends);
    int lowest = c1;
    if  (c2 < lowest){
        lowest = c2;
        }
    if  (c3 < lowest)
        { lowest = c3;
        }
    cout<<lowest;
}