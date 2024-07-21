#include <stdio.h>

/* fseek 함수는 바이너리 함수중 하나로, 파일 위치를 원하는 데에 옮기면서 파일을 읽을 수 있다.*/
/* SEEK_SET 파일 맨 앞에서 이동 시작, SEEK_CUR 현재 위치에서, SEEK_END 마지막 위치에서 이다/*/
int inputFuntion(){

    // 단항연산자 , 해당 연산자는 변수의 앞 뒤에 있을 수 있다.
    //  ++(1을 더함), --(1을 뺌)
    int input;

    printf("할당할 값을 입력하세요\n");
    scanf("%d", &input);
    // 윈도우에서는 사용할떄, #define _CRT_SECURE_NO_WARNING 을 써줘야함
    // 또는 scanf_s을 작성하면 됨, 맥은 그냥 씀
    printf("입력된 값: %d\n", input);
    return 0;
}

int spa;
// 변수 spa는 전역변수로 정의된다.

int Parameter(int a, int b,int c){
    // 함수의 파라미터로, 매개변수(지역 변수)로 불린다. 매개변수는 스택 영역에 저장, 함수를 벗어나면 값이 사라진다.
    return a + b / c;

}

// 과제형 연습 프로그래밍

int task1(){

    int value_1 = -512;
    printf("%d 입니다.\n", value_1);

    return 0;

}

int task2_sum(int a,int b){
    printf("두 수의 합은 %d 입니다.\n", a+b);
    return 0;

}

int task3_scanf(int a){
    printf("할당된 숫자의 제곱수는 %d 입니다.\n", a*a);
    return 0;
}

int main(){

    int value1;
    // 매개변수와 전역변수 , 매개변수 서로의 변수명이 중복되지 않아야 한다.

    task1();

    task2_sum(10,20);

    printf("할당할 숫자를 입력해 주세요!\n");
    scanf("%d", &value1);

    task3_scanf(value1);
    return 0;

}