#include <iostream>
#include <utility>
using namespace std;
    int main(){
        pair<string,int> player;
        player.first="Leon";
        player.second=100;
        cout<<"Name:- "<<player.first<<endl;
        cout<<"Health:- "<<player.second<<endl;
        return 0;
    }