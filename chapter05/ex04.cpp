#include <iostream>
using namespace std;

class Time{

    protected:
        int hour;
        int minute;

    public:
    // Time(int h=0, int m=0){
    //      hour = h;
    //      minute = m;
    //  }

        Time (int h=0, int m=0): hour(h), minute(m) {// 멤버 초기화 리스트
        }

        void print(){

            cout << hour << ":" << minute << endl;
            
        }

};

int main(){

    Time a;
    Time b(10,25);
    Time c(10);

    a.print();
    b.print();
    c.print();

    return 0;   



}