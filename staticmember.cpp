#include <iostream>
using namespace std;
class Player{
    private:
    string name;
    static int totalPlayers;
    public:
    Player(string n){
        name=n;
        totalPlayers++;
    }
    static void showPlayers(){
        cout<<"Total players: "<<totalPlayers<<endl;
    }    
};
int Player::totalPlayers=0;
int main(){
    Player::showPlayers();
    Player p1("leon");
    Player::showPlayers();
    Player p2("Kratos");
    Player::showPlayers();
    Player p3("Arthur");
    Player::showPlayers;
    return 0;
}