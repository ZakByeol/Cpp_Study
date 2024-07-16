//
// Created by 배건우 on 2024. 7. 13..
//
#include "../0실행용파일/Header.h"

char* getSrting(const char* prompt){
    char* input = new char[100];
    printf("%s", prompt);
    fseek(stdin,0,SEEK_END);
    scanf("%99[^\n]s", input);
    return input;
}

class Animal
{
// 접근 지정자
// public: Anyone
// protected: any class inside
// private: this class inside

public:
    int legs;
    char name[50];

    void getAnimalInfo(){
        printf("동물의 다리 갯수 %d\n", legs);
        printf("동물의 이름 %s\n\n", name);
    }
    Animal(int legs,const char* name){
        printf("부모 클래스/Animal 생성자 작동됨\n");
        this->legs = legs;
        strcpy(this->name, name);
    }
};

class Person : public Animal
{
// 접근 지정자의 상속
// 부모 클래스의 이전 지정자 형태의 멤버들을 해당 지정자로 가져옴
// ex) public,protected -> private
public:
    char regist_number[30];
    Person(const char* regist_number) : Animal(2,"사람"){
        printf("자식 클래스/Person 생성자 작동됨\n");
        strcpy(this->regist_number, regist_number);
    }
    void getAnimalInfo(){
        printf("동물의 다리 갯수 %d\n", legs);
        printf("동물의 이름 %s\n", name);
        printf("동물의 주민등록번호 %s\n\n", regist_number);
    }
};
// 상속을 받을 클래스의 오른쪽에 : public과 함께 부모 클래스명을 기입한다.
// 부모 클래스가 우선순위가 높음

int main(){

    char* regist_number = getSrting("주민등록번호를 입력하세요 : \n");
    Person* p = new Person(regist_number);
    delete[] regist_number;
    p->getAnimalInfo();
    return 0;
}

