
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
        protected:
        string weaponName;
        int damage;
        public:
        Weapon(){
            weaponName="knife";
            damage=20;
        }
        void store(){
            
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
            coins=500;
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
        struct Weapon
        {
            string wname;
            int price;
        };
        
        public:
        Player(string n,int h):Character(n,h){
            potions=2;
        }
        void store(){
            cout<<"Welcome to store what do you want to buy?"<<endl;
            Weapon shop[]{
                {"Katana",50},
                {"Axe",70},
                {"Hammer",100},
                {"Spear",120}
            };
            cout<<"Weapon\tPrice\n";
            for(int i=0;i<4;i++){
                    cout<<shop[i].wname<<"\t"<<shop[i].price<<endl;
            }
            cout<<"Select weapon to buy"<<endl;
            string wep;
            cin>>wep;
            if(wep=="Katana" || wep=="Axe" || wep=="Hammer" || wep=="Spear"){
                            if(wep=="Katana" &&coins.getcoin()>=50){
                weapon.changeWeapon("Katana",50);
                coins.spendCoins(50);
            }
            else if(wep=="Axe" && coins.getcoin()>=70){
                weapon.changeWeapon("Axe",70);
                coins.spendCoins(70);
            }
            else if(wep=="Hammer" && coins.getcoin()>=100){
                weapon.changeWeapon("Hammer",100);
                coins.spendCoins(100);
            }
            else if(wep=="Spear" && coins.getcoin()>=120){
                weapon.changeWeapon("Spear",120);
                coins.spendCoins(120);
            }
            else{
                cout<<"Insufficient coins"<<endl;
            }
        }
        else{
            cout<<"Enter valid choice!"<<endl;
        }
        cout<<"You've bought a "<<weapon.getWeapons()<<endl;
            }

        void attack(Character &enemy) {
            if(weapon.getWeapons()=="knife"){
                cout<<name<<" slashes with knife!"<<endl;
                enemy.damage(20);
            }
            else if(weapon.getWeapons()=="Katana"){
                cout<<name<<" swings the Katana"<<endl;
                enemy.damage(50);
            }
            else if(weapon.getWeapons()=="Axe"){
                cout<<name<<" sliced with axe"<<endl;
                enemy.damage(50);
            }
            else if(weapon.getWeapons()=="Hammer"){
                cout<<name<<" smash the hammer"<<endl;
                enemy.damage(100);
            }
            else if(weapon.getWeapons()=="Spear"){
                cout<<name<<" hits with spear"<<endl;
                enemy.damage(120);
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
            cout<<"+1 potion added"<<endl;
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
                cout<<"Goblin is died!"<<endl;
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
    class Dragon:public Character{
        Coins coin;
        Player player;
        public:
        Dragon(string n,int h):Character(n,h),player(n,h){

        }
        void attack(Character &enemy){
            if(health>0){
            cout<<"Throws flame"<<endl;
            enemy.damage(35);
            }
            else{
                cout<<"Dragon is died!"<<endl;
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
        cout<<"Do you want to visit store: ";
        cin>>decision;
        if(decision=="Yes"){
            p.store();
        }
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
        cout<<"Level cleared!"<<endl;
        Dragon d("dragon",80);
        cout<<"Do you want to visit store: ";
        cin>>decision;
        if(decision=="Yes"){
            p.store();
        }
            while(p.isAlive()&&d.isAlive()){
                int choice;
                cout<<"1.Attack"<<endl;
                cout<<"2.Use potion"<<endl;
                cin>>choice;
                switch (choice)
                {
                case 1:
                    p.attack(g);
                    d.showStates();
                    d.attack(p);
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

        return 0;
    }

    