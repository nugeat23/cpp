#include <iostream>
#include <string>
using namespace std;

class SuperClass{

    public:
        void print(){

            cout << "SuperClass의 print()" << endl;

        }

};

class ChildClass : public SuperClass{

    public:
        void print(){

            SuperClass::print();
            cout << "ChildClass의 print()" << endl;

        }

};

int main(){

    ChildClass c;
    c.print();
    return 0;


}