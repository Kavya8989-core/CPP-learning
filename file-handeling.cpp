// #include <iostream>
// #include <fstream>
// using namespace std;
//     int main(){
        
//         ofstream file("save.txt");
//         file<<"Leon"<<endl;
//         file<<100<<endl;
//         file<<200<<endl;
//         file<<"knife"<<endl;
//         file.close();
        
//         ifstream read("save.txt");
//         string name,weapon;
//         int health,coin;
//         read>>name;
//         read>>health;
//         read>>coin;
//         read>>weapon;

//         read.close();
//         cout<<name<<endl;
//         cout<<health<<endl;
//         cout<<coin<<endl;
//         cout<<weapon<<endl;
//         return 0;
//     }

#include <iostream>
#include <fstream>
using namespace std;
    int main(){
    ofstream file("Info.txt");
    file<<"Leon"<<endl;
    file<<100<<endl;
    file<<450<<endl;
    file<<"Katana"<<endl;
    file<<3<<endl;
    file<<5<<endl;
    file.close();

    ifstream read("Info.txt");
     if(!read){
    cout<<"No such file found!"<<endl;

return 0;
     }
    string name,weapon;
    int health,coins,potions,level;
    read>>name;
    read>>health;
    read>>coins;
    read>>weapon;
    read>>potions;
    read>>level;
    read.close();
    cout<<"Name:- "<<name<<endl;
    cout<<"health:- "<<health<<endl;
    cout<<"coins:- "<<coins<<endl;
    cout<<"weapon:- "<<weapon<<endl;
    cout<<"potions:- "<<potions<<endl;
    cout<<"level:- "<<level<<endl;
    return 0;
}