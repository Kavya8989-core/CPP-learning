#include <iostream>
using namespace std;
        class Character{
                protected:
                string name;
                public:
                Character(string n){
                        name=n;
                }
        };
        class Coins{
                protected:
                int coins;
                public:
                Coins(){
                        coins=200;
                }
                int getcoins(){
                    return coins;
                }
                void showCoins(){
                        cout<<"Coins: "<<coins<<endl;
                }
        };
        class Weapon{
                protected:
                string name;
                int dmg;
                public:
                Weapon(){
                    name="Knife";
                    dmg=10;
                }
                Weapon(string n,int d){
                    name=n;
                    dmg=d;
                }
                void showWeapon(){
                    cout<<"Weapon: "<<name<<endl;
                    cout<<"Damage: "<<dmg<<endl;
                }
                void changeWeapon(string n,int d){
                    name=n;
                    dmg=d;
                }
        };
        class Player:public Character{
            private:
            Coins coins;
            Weapon weapon;
            public:
            Player(string pName):Character(pName){

            }
                void showName(){
                    cout<<"Player: "<<name<<endl;
                    }
                     void upgradeWeaopons(){
                        if(coins.getcoins()<50){
                        weapon.changeWeapon("axe",20);
                    }
                    else if(coins.getcoins()<100){
                        weapon.changeWeapon("Sword",50);
                    }
                    else{
                        weapon.changeWeapon("Hammer",70);
                    }
                    weapon.showWeapon();
                    coins.showCoins();
                }
                
            };


            int main(){
                Player p("Leon");
                p.showName();
                p.upgradeWeaopons();
                
                return 0;
            }