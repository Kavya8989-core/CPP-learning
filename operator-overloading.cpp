// #include <iostream>
// using namespace std;
//     class Player{
//         private:
//         int coins;
//         public:
//         Player(int c){
//             coins=c;
//         }
//         Player operator+(Player other){
//             Player temp(coins+other.coins);
//             return temp;
//         }
//         void show(){
//             cout<<coins<<endl;
//         }
//     };
//     int main(){
//         Player p1(100);
//         Player p2(50);
//         Player p3=p1+p2;
//         p3.show();
//         return 0;
//     }

#include <iostream>
using namespace std;
    class Player{
        private:
        int coins;
        public:
        Player(int c){
            coins=c;
        }
        bool operator==(Player other){
            return coins==other.coins;
        }
        void show(){
            cout<<coins<<endl;
        }
    };
    int main(){
        Player p1(100);
        Player p2(100);
        if(p1==p2){
            cout<<"Equal"<<endl;
        }
        else{
            cout<<"not equal"<<endl;
        }
        return 0;
    }