#include <iostream>
using namespace std;
    class Character{
        protected:
        string name;
        int health;
        public:
        Character(string n,int h){
            name=n;
            if(h>0){
                health=h;
            }
                else{
                    health=0;
                }
        }
         void attack(){
            cout<<"Character attacks!"<<endl;
        }
        void damage(int dmg){
                if(health>0){
                    health=health-dmg;
                if(health<0){
                    health=0;
                    cout<<name<<" is died!"<<endl;
                }
                }
                
            }
        void heal(int amt){
            if(amt>0){
                health=health+amt;
            }
        }
        bool isAlive(){
            if(health>0){
                return 1;
            }
            else {
                return 0;
        }
    }
    };
    class Weapon{
        Coins coin;
        protected:
        string weaponName;
        int damage;
        public:
        Weapon(){
            weaponName="knife";
            damage=20;
        }
        void store(){
            cout<<"Total coins you have: "<<endl;
            coin.viewCoins();
        }
        void changeWeapon(string w,int d){
            weaponName=w;
            damage=d;
        }
        string getWeapons(){
            return weaponName;
        }
    };
    class Coins{
        protected:
        int coins;
        public:
        Coins(){
            coins=0;
        }
        int getcoin(){
            return coins;
        }
        void spendCoins(int amt){
            coins=coins-amt;
        }
        void increaseCoin(){
            coins=coins+100;
            cout<<"+100 coins added!"<<endl;
        }
        void viewCoins(){
            cout<<coins<<endl;
        }
    };
    class Player:public Character{
        Weapon weapon;
        Coins coins;
        protected:
        int potions=2;
        public:
        Player(string n,int h):Character(n,h){
            potions=2;
        }
        void upgradeWeapon(){
            if(coins.getcoin()>50){
                weapon.changeWeapon("Sword",50);
                coins.spendCoins(50);
            }
            else{
                cout<<"Insufficient coins!"<<endl;
            }
        }
        void attack(Character &enemy) {
            if(weapon.getWeapons()=="knife"){
                cout<<name<<" slashes with knife!"<<endl;
                enemy.damage(20);
            }
            else{
                cout<<name<<"swings the sword"<<endl;
            }
        }

        void usePotions(){
            if(potions>0){
                heal(20);
                potions=potions-1;
            }
            else{
                cout<<"No potions left"<<endl;
            }
        }
        void increasePotions(){
            potions=potions+1;
        }
        void showStats(){
            cout<<name<<endl;
            cout<<health<<endl;
        }
    };
    class Goblin:public Character{
        Coins coin;
        Player player;
        public:
        Goblin(string n,int h):Character(n,h),player(n,h){

        }
        void attack(Character &enemy){
            if(health>0){
            cout<<"Goblin attacks"<<endl;
            enemy.damage(20);
            }
            else{
                
            }
        }
        void showStates(){
            cout<<name<<endl;
            cout<<health<<endl;
            if(health<=0){
                coin.increaseCoin();
                player.increasePotions();
            }
        }
       
    };
    int main(){
        Player p("Leon",100);
        Goblin g("goblin",50);
        string decision;
        cout<<"Do you want to attack or visit store: ";
        cin>>decision;
        if(decision=="attack"){
            while(p.isAlive()&&g.isAlive()){
                int choice;
                cout<<"1.Attack"<<endl;
                cout<<"2.Use potion"<<endl;
                cin>>choice;
                switch (choice)
                {
                case 1:
                    p.attack(g);
                    g.showStates();
                    g.attack(p);
                    p.showStats();
                    break;
                
                    case 2:
                    p.usePotions();
                    p.showStats();
                    break;

                
                default:
                cout<<"Invalid choice!"<<endl;
                    break;
                }
            }
            
        }
        else if(decision=="store"){

        }
        return 0;
    }
    