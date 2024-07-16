#include "Header.h"

int task1(){

    int value1;
    char caluate;
    int value2;

    printf("\n\n연산에 사용될 첫번쨰 숫자를 입력해 주세요: ");

    fseek(stdin, 0, SEEK_END);
    scanf("%d", &value1);

    printf("\n연산에 사용될 연산자를 입력해 주세요: ");
    fseek(stdin, 0, SEEK_END);
    scanf("%c", &caluate);    

    printf("\n연산에 사용될 두번쨰 숫자를 입력해 주세요: ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &value2);

    
    switch (caluate)
    {
    case '+':
        printf("%d + %d = %d \n", value1, value2, value1+value2);
        break;

    case '-':
        printf("%d - %d = %d \n", value1, value2, value1-value2);
        break;
    case '*':
        printf("%d x %d = %d \n", value1, value2, value1*value2);
        break;
    case '/':
        printf("%d / %d = %d \n", value1, value2, value1/value2);
        break;
    case '%':
        printf("%d 나누기 %d 의 나머지는 : %d \n", value1, value2, value1%value2);
        break;
    default:
        printf("알맞은 연산식을 입력해 주세요 ...\n ");
        break;

    }

    return 0;

}

int task2(){

    int value1,value2;
    char caluate;

    printf("\n\n연산에 사용될 첫번쨰 숫자를 입력해 주세요: ");

    fseek(stdin, 0, SEEK_END);
    scanf("%d", &value1);

    printf("\n연산에 사용될 연산자를 입력해 주세요: ");
    fseek(stdin, 0, SEEK_END);
    scanf("%c", &caluate);    

    printf("\n연산에 사용될 두번쨰 숫자를 입력해 주세요: ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &value2);

    
    switch (caluate)
    {
    case 'p':
        printf("%d + %d = %d \n", value1, value2, value1+value2);
        break;

    case 'x':
        break;

    case 'r':
        printf("%d x %d = %d \n", value1, value2, value1*value2);
        break;
    default:
        printf("알맞은 연산식을 입력해 주세요 ...\n ");
        break;

    }

    return 0;


}

int main(){
    
    /* 1byte 크기 참거짓 변수 */
    bool mybool = false;

    /* 1byte 크기의 문자 혹은 문자열 자료형 */
    /* -128 ~ 127 숫자를 저장 */
    char mychar = 'a';
    char mychar1 = 97;

    /* 4byte 크기의 정수 연산 자료형 */
    /* 컴퓨터에서 가장 빨리 수행할 수있는 정수 연산 단위임*/
    int myint = 2147483647;

    /* 4byte 크기의 실수 연산 자료형 */
    /* C# 혹은 자바에는 f를 붙여야함 */
    float myfloat = 10.02f;

    /* 8byte 크기의 실수 연산 자료형 */
    /* double precision float point 의 약자로, */
    /* 2배 정밀도를 갖는 소수점수 ? */
    /* 기사치 자료형 */
    /* %lf 출력 형식 지정자 */
    double mydouble = 1000.2000239;



    /* 정수형 덧뺄셈 > 정수형 곱나눗셈 > 소수 덧뺄셈 > 소수 곱나눗셈*/

    printf("char : %c\n", mychar1);
    printf("myint : %02d", myint);

    task2();

    return 0;

}