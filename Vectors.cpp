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
        cout<<"Inventory system"<<endl;
        cout<<"1. Add item"<<endl;
        cout<<"2. Remove last item"<<endl;
        cout<<"3. Show Inventory"<<endl;
        cout<<"4. Clear Iventory"<<endl;
        cout<<"5. Exit"<<endl;
        int choice;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        string item;
        switch (choice)
        {
        case 1:
            cout<<"Enter item: ";
            cin>>item;
            inventory.push_back(item);
            cout<<item<<" is added in your inventory"<<endl;
            break;
        case 2:
        if(inventory.size()>0){
        char decision;
        cout<<"Do you want to remove the last item (Y/N)";
        cin>>decision;
        if(decision='Y'){
            inventory.pop_back();
        }
        else if(decision='N'){

        }
        else{
            cout<<"Enter a valid desicion"<<endl;
        }
    }
    else{
        cout<<"Your inventory is empty!"<<endl;
    }
        default:
            break;
        }
    }