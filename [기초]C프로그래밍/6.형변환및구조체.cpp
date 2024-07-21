#include <stdio.h>

int typechange(){
    float num1 = 10.0;
    float num2 = 0.1;

    int result_1 = num1 - num2;
    /* 변수의 형변환 */
    /* 우항의 두 변수의 합은 실수이지만, 좌항에 result가 */
    /* int형으로 정의 되었으므로, 결과는 9가 된다. */
    /* ( 9에 가깝기 떄문이다. ) */

    /* 정수형 변수에 실수형 변수를 저장할시 암묵적 형변환 */
    /* Implicit 를 해준다 (C/C++ 특징) */

    printf("%d", result_1);

    int num3 = 10;
    int num4 = 4;

    float result_2 = (float)num1 - (float)num2;
    /* 우항이 실수형 계산이므로, 저렇게 형변환을 해준다. */


    return 0;
}

struct Marine
{
    int atk;
    int hp;
    int def;
}m[10];

/* 이렇게 중괄호 후에 구조체 변수를 선언해줌! */
/* 구조체 변수로는 배열도 가능하고, 배열이 아닌 것도 가능함 */



int structure(){
    /* 구조체 struct*/
    /* 변수를 한데 묶어서 관리해줄 수 있는 변수들의 집합*/


    m[0].hp = 40;
    printf("%d", m[0].hp);

    return 0;
}

int main(){

    structure();
    
}