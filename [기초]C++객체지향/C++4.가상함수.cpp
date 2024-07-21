#include "../Header.h"

//class Animal
//{ // 오버라이드를 위한 클래스 작성
//public:
//    int legs;
//    char name[50];
//
//    virtual void getAnimalInfo(){
//        printf("동물의 다리 갯수 %d\n", legs);
//        printf("동물의 이름 %s\n\n", name);
//    }
//    Animal(int legs,const char* name){
//        printf("부모 클래스/Animal 생성자 작동됨\n");
//        this->legs = legs;
//        strcpy(this->name, name);
//    }
//};
//
//class Person : public Animal
//{
//public:
//    char regist_number[30];
//    Person(const char* regist_number) : Animal(2,"사람"){
//        // 생성자가 작성되어 있다면 상속 표시를 해줘야한다. < 이전 내용 >
//        printf("자식 클래스/Person 생성자 작동됨\n");
//        strcpy(this->regist_number, regist_number);
//    }
//    void getAnimalInfo(){
//        printf("동물의 다리 갯수 %d\n", legs);
//        printf("동물의 이름 %s\n", name);
//        printf("동물의 주민등록번호 %s\n\n", regist_number);
//    } // ㅇ...어.. 그 전에 오버라이드를 해봤었네?
//};

class Animal
{ // 오버라이드를 위한 클래스 작성
public:
    int legs;
    char* name;

    virtual void getAnimalInfo(){
        printf("동물의 다리 갯수 %d\n", legs);
        printf("동물의 이름 %s\n\n", name);
    }
    Animal(int legs,const char* name){
        this->name = new char[strlen(name) + 1];
        printf("부모 클래스/Animal 생성자 작동됨\n");
        this->legs = legs;
        strcpy(this->name, name);
    }
    virtual ~Animal(){
        printf("Animal 소멸자 호출\n");
        delete[] name;
    }
};

class Person : public Animal
{
public:
    char* regist_number;
    Person(const char* regist_number) : Animal(2,"사람"){
        // 생성자가 작성되어 있다면 상속 표시를 해줘야한다. < 이전 내용 >
        this->regist_number = new char[strlen(regist_number)+1];
        printf("자식 클래스/Person 생성자 작동됨\n");
        strcpy(this->regist_number, regist_number);
    }
    void getAnimalInfo(){
        printf("동물의 다리 갯수 %d\n", legs);
        printf("동물의 이름 %s\n", name);
        printf("동물의 주민등록번호 %s\n\n", regist_number);
    } // ㅇ...어.. 그 전에 오버라이드를 해봤었네?
    virtual ~Person(){
        printf("Person 소멸자 호출\n");
        delete[] regist_number;
    }
};

int main(){
    Person* person = new Person("3179407");
    Animal* animal = person;
    // 다형성, Person 객체에 대해 person 인스턴스를 만들었음
    // 이 person 을 animal에 할당함

    animal->getAnimalInfo();
    person->getAnimalInfo();

    // 다르게 나옴, --> virtual 없을 경우
    // animal 인스턴스의 getAnimalInfo 함수는 Animal 클래스에 속한 함수를 실행함

    // 가상함수(Virtual)
    // 오버라이딩할 때, 부모 클래스의 함수에서 Virtual 키워드를 추가하게 되면
    // 정상적으로 우리가 원하는 오버라이드된 함수를 찾아가서 실행하게 됨

    // +) C#은 이를 적용하였고, Java는 모든 클래스 멤버함수가 virtual을 포함하고 있다.

    Animal* ani = new Person("46371935");
    delete ani;
    // 실제 Person 클래스에서 메모리가 사용되는데, delete가 되지않아
    // 메모리 누수가 일어남
    // 여기에 virtual 키워드를 넣으면 됨

//    Person* per = new Person("3789147");
//    delete per;
    // 자식 클래스-부모 클래스 연쇄적으로 소멸자가 호출됨


    return 0;
}
