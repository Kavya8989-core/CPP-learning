#include <iostream>
using namespace std;
    class Player{
        string name;
        public:
        Player(string n){
            name=n;
            cout<<name<<" created"<<endl; //objects are created in the forward order 
        }
        ~Player(){
            cout<<name<<" destroyed"<<endl;// but destroyed in   backward
        }
    };
    int main(){
        Player p1("leon");
        Player p2("Arthur");
        return 0;
    }