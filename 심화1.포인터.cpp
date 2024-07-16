#include "Header.h"

/* Cpp에서의 포인터 : C/Cpp는 변수명이 아닌, 주소값으로 */
/* 변수를 구별한다. */

int pointer_code(){

    int myPointer = 100; 
    int* myPointerAdress; //포인터 데이터타입

    myPointerAdress = &myPointer; // 주소를 저장

    *myPointerAdress = 200;
    // 해당 변수가 가르키는 데이터가 200이다.
    // 이른바 간접조정이다.

    int integrate = *myPointerAdress;



    return 0;
}

int training_1(){

    /* 두 값을 입력받고 해당 값들을 포인터를 이용해 사칙연산을 실행하시오 */


    float input_1,input_2;
    float result = input_1 + input_2;

    float* pinput_1 = &input_1;
    float* pinput_2 = &input_2;
    float* presult = &result;

    *pinput_1 = getfloat();
    *pinput_2 = getfloat();
    *presult = *pinput_1 + *pinput_2;

    printf("%f + %f = %f", input_1, input_2 , result);

    return 0;
}

float getfloat(){
    float input_1;

    printf("수를 입력하세요 :");
    fseek(stdin, 0, SEEK_END);
    scanf("%f", &input_1);

    return input_1;
}

int training_2(){
    float value1,value2,result;
    float* pvalue1 = &value1;
    float* pvalue2 = &value2;
    float* presult = &result;

    *pvalue1 = getfloat();
    *pvalue2 = getfloat();

    for (int i = 0; i < 5; i++)
    {
        switch (i)
        {
        case 0:
            *presult = *pvalue1 + *pvalue2;
            printf("%f + %f = %f\n", value1, value2, result);
            continue;

        case 1:
            *presult = *pvalue1 - *pvalue2;
            printf("%f - %f = %f\n", value1, value2, result);
            continue;

        case 2:
            *presult = *pvalue1 / *pvalue2;
            printf("%f / %f = %f\n", value1, value2, result);
            continue;

        case 3:
            *presult = *pvalue1 * *pvalue2;
            printf("%f * %f = %f\n", value1, value2, result);
            continue;

        }
    }
    
    return 0;
}

int main(){
    training_2();
}