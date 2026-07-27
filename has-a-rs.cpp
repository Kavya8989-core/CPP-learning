#include <iostream>
using namespace std;
        class Character{
                private:
                string name;
                public:
                Character(string n){
                        name=n;
                }
        };
        class Coins{
                private:
                int coins;
                public:
                Coins(int c){
                        coins=c;
                }
                void showCoins(){
                        cout<<"Coins: "<<coins<<endl;
                }
        };
        class Weapon{
                private:
                string name;
                int dmg;
                public:
                Weapon(string n,int d){
                        name=n;
                        dmg=d;
                }
                void showWeapon(){
                        cout<<"Weapon: "<<name<<endl;
                        cout<<"Damage: "<<dmg<<endl;
                }
        };
        class Player:public Character{
            private:
            string playerName;
            Coins coins;
            Weapon weapon;
            public:
            Player(string pName,string wName,int dmg,int coins)
                :Character(pName), weapon(wName,dmg),
                 coins(coins)
                {
                    playerName=pName;
                }
                void showName(){
                    cout<<"Player: "<<playerName<<endl;
                    weapon.showWeapon();
                    coins.showCoins();
                }
            };

            int main(){
                Player p("Leon","Knife",20,100);
                p.showName();
            }