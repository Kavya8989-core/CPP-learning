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
        int choice=0;
        string item;
        while (choice!=5)
        {  
        cout<<"Inventory system"<<endl;
        cout<<"1. Add item"<<endl;
        cout<<"2. Remove last item"<<endl;
        cout<<"3. Show Inventory"<<endl;
        cout<<"4. Clear Iventory"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
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
        cout<<"Do you want to remove the last item (Y/N):- ";
        cin>>decision;
        if(decision=='Y'){
            inventory.pop_back();
        }
        else if(decision=='N'){

        }
        else{
            cout<<"Enter a valid desicion"<<endl;
        }
        }
        else{
            cout<<"Your inventory is empty!"<<endl;
        }
        break;
        case 3:
        if(inventory.size()>0){
             for(int i=0;i<inventory.size();i++){
                cout<<i+1<<" "<<inventory[i]<<endl;
        }
    }
        else{
            cout<<"Your inventory is empty!"<<endl;
    }
        break;
        case 4:
        if(inventory.size()>0){
            inventory.clear();
            cout<<"Your inventory is cleared!"<<endl;
        }
        else{
            cout<<"Your inventory is empty!"<<endl;
        }
        break;
        case 5:
        cout<<"You have been exited from the inventory!"<<endl;
    break;
        default:
        cout<<"Please enter a valid choice!"<<endl;
            break;
        }
    }
    return 0;
    }