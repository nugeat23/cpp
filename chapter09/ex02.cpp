#include <iostream>
#include <string>
using namespace std;

class Animal{

    public:
        void speak(){

            cout<< "동물이 소리를 내고 있음" << endl;

        }

};

class Dog : public Animal{

    public:
        void speak(){

            cout << "개가 소리를 내고 있음" << endl;
            
        }

};

int main(){


    Dog dog;
    dog.speak();

    return 0;


}