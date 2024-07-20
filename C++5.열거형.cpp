#include "Header.h"

enum Gender
{
    MALE,FEMALE
}; // 가독성을 위해 탄생한 데이터 형태?
// 내부적으로 integer로 돌아가고 있기 때문에,
// 가독성은 좋으나 상수로만 작성할 수 있는 switch문과 시너지가 좋음

class Student
{
public:
    char name[10];
    int student_num;
    Gender gender;

    Student(const char* name, int student_num, Gender gender)
    {
        strcpy(this->name,name);
        this->gender = gender;
        this->student_num = student_num;
    }
    void PrintInfo(){
        printf("%s의 학생번호는 %d 입니다. 성별은 %s 입니다.\n",name,student_num,gender == Gender::MALE ? "님성":"여성");
    }
};

enum class Month{
    JAN,FAB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
}; // enum class

int main(){
    Student* student = new Student("배건우",7805248,Gender::MALE);
    student->PrintInfo();

    switch (student->gender) { // 정수로 돌아가는 점을 활용한 switch문 활용
        case Gender::MALE:
            printf("남자임\n");
            break;
        case Gender::FEMALE:
            printf("여자임\n");
            break;
    }

    Month m = Month::OCT;
    int value = (int)m;
    // enum class
    // 일반적인 enum에는 두 enum에 동일한 enum 상수가 존재할시, 오류가 발생함

    printf("%d %d", Month::OCT ,value);


    return 0;
}