#include <iostream>
using namespace std;
    class Animal{
        public:
        virtual void sound(){
            cout<<"Animal sound"<<endl;
        }
    };
    class dog:public Animal{
        public:
        void sound(){
            cout<<"Dog barks!"<<endl;
        }
    };
    class cat:public Animal{
        public:
        void sound(){
            cout<<"Cat meows!"<<endl;
        }
    };
        int main(){
            Animal* a;
            dog d;
            cat c;
            a=&d;
            a->sound();
            a=&c;
            a->sound();
            return 0;
        }
