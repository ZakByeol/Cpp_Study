#include "../0실행용파일/Header.h"

// Abstraction 추상화 함
// 필요한 속성과 행동을 나누는 행위

int destructor_count = 0;

struct ProtossUnit {

    int shieldAmount = 60;
    int shieldRegen = 2;
    int hp = 80;

};

struct Zealot : public ProtossUnit{
    Zealot(int value_1){
        hp = 80;
        shieldAmount = 60;
        shieldRegen = value_1;
    }
    // 상속을 받음
};

class Student
{
public:

//    클래스 오류가 일어남 : 클래스 멤버에 접근하기 위해서는 public 이라는
//    키워드를 작성해야한다.

    // 본래는 헤더파일에 작성하는 코드임
    int student_number;
    char student_name[20];
    int gender;
    char rank[20]; // 1등급, 2등급, 3등급 '''

    Student(const char* student_name,int student_number,int gender,const char* rank)
    {
        student_name = new char[strlen(student_name) + 1]; // 마지막 null value 때문에 +1
        strcpy(this->student_name, student_name);
        this->student_number = student_number;
        this->gender = gender;
        rank = new char[strlen(rank)+1];
        strcpy(this->rank, rank);

        delete student_name;
        delete rank;
    }
    // 생성자 : 리턴타입(return type)을 갖지 않음!
    // 파라미터의 값과 멤버 변수의 이름이 똑같을때, this->을 사용하여
    // 클래스 변수를 지칭할 수 있다.
    // [!] 생성자 선언시, class instance 할당할때, 생성자를 할당해야한다!

    ~Student()
    {
        printf("%s의 소멸자 호출됨 \n", student_name);
        destructor_count += 1;
    }
    // 소멸자(destructor) : 메모리에서 해제될 때의 행동을 지정할 수 있음.
    // ~Classname() , 이것도 return type 이 없다.

    void printStudentInfo(){
        printf("학생 번호 : %d\n",student_number);
        printf("학생 이름 : %s\n", student_name);
        printf("학생 성별 : %s\n\n", gender == 0 ? "남자" : "여자");

    }
};

int main(){
 // 객체지향 프로그래밍 (Object Oriented Programing)
//
//    Zealot* zealot;
//    ProtossUnit* protoss;
//
//    // 비정상적인 코드 zealot = protoss;
//    zealot = (Zealot*)protoss;


    Student s = Student("배건우",1234,0,"2등급"); // s,s2 -> class instance
    s.student_number = 1234;
    strcpy(s.student_name, "배건우");
    s.gender = 0;

    s.printStudentInfo();

    Student s2 = Student("배견우",3456,0,"3등급");
    s2.student_number = 3456;
    strcpy(s2.student_name, "배견우");
    s2.gender = 0;

    s2.printStudentInfo();

    // s2에 독립적으로 존재한다. 정적인 클래스 선언

    Student* ps = new Student("춘식이",0212,1,"5등급");
    // new 는 동적할당 함수로 생성자 호출,캐스팅 동작 불필요인 함수이다.
    // 자세한 설명은 https://blog.naver.com/mingj91/223382233275
    ps->student_number = 1234;
    strcpy(ps->student_name, "춘식이");
    ps->gender = 1;

    ps->printStudentInfo();
    // 클래스의 실제 값이 힙영역에 저장되는 것 : 동적할당
    // 함수의 Lifecycle에 관계없이 유지(sustain)된다.
    delete ps; // 해당 문장이 없으면 동적할당이 해제되기 때문에 소멸자가 호출됨

    printf("소멸자 호출 횟수 : %d\n", destructor_count);
    // 배건우(s)와 배견우(s2)에 해당하는 소멸자 호출은 함수가 끝날때 호출되기 때문에 노카운트임
    return  0;

}