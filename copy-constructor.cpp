// #include <iostream>
// using namespace std;
//     class Player{
//         public:
//         string name;
//         int health;
//         Player(string n,int h){
//             name=n;
//             health=h;
//         }
//         Player(const Player &obj){
//             cout<<"Copy constructor is called"<<endl;
//             name=obj.name;
//             health=obj.health;
//         }
//         void show(){
//             cout<<"Name:- "<<name<<endl;
//             cout<<"Health:- "<<health<<endl;
//         }
//         void sethealth(int h){
//             health=h;
//         }
        
//     };
//     int main(){
//         Player p1("Knight",100);
//         Player p2=p1;
//         p2.sethealth(50);
//         p1.show();
//         p2.show();
//     }

// #include <iostream>
// using namespace std;
//     class Player{
//         public:
//         string name;
//         int health;
//         Player(string n,int h){
//             name=n;
//             health=h;
//         }
//         Player(const Player &obj){
//             cout<<"Copy constructor is called"<<endl;
//             name=obj.name;
//             health=obj.health;
//         }
//         void show(){
//             cout<<"Name:- "<<name<<endl;
//             cout<<"Health:- "<<health<<endl;
//         }
//         void sethealth(int h){
//             health=h;
//         }
        
//     };
//     int main(){
//         Player p1("Knight",100);
//         Player p2=p1;
//         Player p3(p1);
//         return 0;
//     }