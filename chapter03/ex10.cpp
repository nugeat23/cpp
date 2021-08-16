#include <iostream>
#include <string>
using namespace std;

int main(){

    string list[] = {"홍길동", "고길동", "둘리"};
    
    // for 1번, 참조변수 --- 주소 참조 작업만 발생
    for(auto& name: list){

        cout << name << endl;

    }


    // for 2번 , 복사 list의 각 요소를 name 변수로 복사
    for(auto name: list){

        cout << name << endl;

    }


}