#include <stdio.h>
/* #include - 헤더파일에 존재하는 코드를 가져오는 구문 */

/* cstdio = stdio.h 입출력 함수 코드를 가져오는 헤더파일 */
/* cmath 수학 관련 함수 헤더파일 sin cos tan exp pow log .. */
/* cstdlib 메모리 함수 헤더파일 (난수, 포인터) */
/* ctime 시간 관련 함수 헤더파일 */

/* ~.h - Cpp 표준 헤더파일임 */

/* 사용자 정의 헤더 - #include "헤더파일 이름" */

#include "../Header.h"

int add(int value1, int value2);
/* 함수의 원형으로, 밑에 있는 함수를 불러온다. ( 순서 무시 ) */

int main(){
    int value1 = 100;
    int value2 = 200;

    int result = add(value1 , value2);

}

int add(int value1,int value2){
    return value1 + value2;

}