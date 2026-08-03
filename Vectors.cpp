// #include <iostream>
// #include <vector>
// using namespace std;
//     int main(){
//         vector<int> marks;
//         marks.push_back(85);
//         marks.push_back(90);
//         marks.push_back(78);
//         marks.push_back(95);
//         marks.push_back(88);
//         for(int i=0;marks.size();i++){
//             cout<<marks[i]<<endl;
//         }
//         return 0;
//     }

#include <iostream>
#include <vector>
using namespace std;
    int main(){
        vector <string> inventory;
        inventory.push_back("Inventory system");
        inventory.push_back("1. Add item");
        inventory.push_back("2. Remove last item");
        inventory.push_back("3. Show Inventory");
        inventory.push_back("4. Clear Iventory");
        inventory.push_back("5. Exit");
        inventory.push_back("Potion");

        for(int i=0;inventory.size();i++){
            cout<<inventory[i]<<endl;
        }
        // int choice;
        // switch (choice)
        // {
        // case 1:
        //     string ;
        //     cout<<"Enter item: ";
        //     break;
        
        // default:
        //     break;
        // }
    }