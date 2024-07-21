//
// Created by 배건우 on 2024. 7. 14..
//
#include "../Header.h"

// 오버로드
// 동일한 이름을 갖고 있으나, 다른 동작을 하게 만드는 함수이다.
// 서로 다른 파라미터에 대해 각각의 동작을 따로 지정해줄 수 있다.
void sum(int a,int b){
    printf("%d\n",a+b);
}
void sum(int a,int b,int c){
    printf("%d\n",a+b+c);
}

class Member{ // 클래스 오버로딩을 위한 클래스 작성
public:
    int member_number;
    char member_name[50];

    Member(){
        member_number = 10;
        strcpy(member_name, "춘식이");
    }
    Member(int member_number,const char* member_name){
        this->member_number = member_number;
        strcpy(this->member_name, member_name);
    }

    void getmemberInfo(){
        printf("멤버 번호 : %d\n", member_number);
        printf("멤버 이름 : %s\n\n", member_name);
    }
};

class Vector{ // 연산자 오버로딩을 위한 클래스 작성
public:
    float x;
    float y;
    Vector(float x, float y){
        this->x = x;
        this->y = y;
        printf("x : %f\ny : %f\n\n", this->x,this->y);
    }
    Vector(){
        x = 0.0f;
        y = 0.0f;
        printf("x : %f\ny : %f\n\n", this->x,this->y);
    }
    void getInfo(){
        printf("%.2f, %.2f\n\n", x,y);
    }
};

Vector operator+(Vector& v1, Vector& v2){
    return Vector(v1.x + v2.x, v1.y+v2.y);
}
// 연산자 오버로딩을 위한 구문
// main 함수 안에서는 정의를 못 내리는 듯;;
// Scope's problem

class Animal
{ // 오버라이드를 위한 클래스 작성
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
public:
    char regist_number[30];
    Person(const char* regist_number) : Animal(2,"사람"){
        // 생성자가 작성되어 있다면 상속 표시를 해줘야한다. < 이전 내용 >
        printf("자식 클래스/Person 생성자 작동됨\n");
        strcpy(this->regist_number, regist_number);
    }
    void getAnimalInfo(){
        printf("동물의 다리 갯수 %d\n", legs);
        printf("동물의 이름 %s\n", name);
        printf("동물의 주민등록번호 %s\n\n", regist_number);
    } // ㅇ...어.. 그 전에 오버라이드를 해봤었네?
};

int main()
{
    sum(100,200);
    sum(100,200,300);
    // 함수 오버로딩
    // 클래스 멤버 함수 및 생성자 에서도 동일하게 작용한다.
    Member* member1 = new Member();
    Member* member2 = new Member(22421592,"배건우");

    member1->getmemberInfo();
    member2->getmemberInfo();

    // 연산자 오버로딩
    // 동적 클래스가 아닌 스택 기반 클래스 인스턴스에 동작하는 연산자를 오버로딩 할 수 있다.

    Vector v1 = Vector(100,200);
    Vector v2 = Vector(1,2);

    Vector v3 = v1 + v2;
//  그냥 이렇게는 연산자를 사용 못 함 operator 작업을 거쳐 줘야함
    v3.getInfo();

    // 오버라이드
    // 부모 클래스의 함수의 정의를 자식 클래스에서
    // 새로 덮어 쓰는 것을 의미한다.
    Person* p = new Person("02914980");
    Animal* ani = new Animal(2,"닭");

    p->getAnimalInfo();
    ani->getAnimalInfo();

    return 0;
}