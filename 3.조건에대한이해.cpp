#include <stdio.h>

// 논리 연산자(이항 연산자)
// && 논리적 AND 연산
// || 논리적 OR 연산

// 비교 연산자
// 동일 혹은 비교를 위한 연산
int condition(int value1,int value2,int value3){
    if(/*조건*/value2 == value3){
        //코드
        printf("value2, value3는 서로 같습니다.\n");

    }
    else if(value1 > value2 || value1 == value3 && value2 != value3){
        printf("value3와 value2가 같지 않고, value1는 value2 보다 크거나 같습니다.\n");
    }
    else if(value1 < value2 && value2 != value3){
        printf("value3과 value2가 같지 않고, value1는 value2 보다 작습니다.\n");
    }
    else{
        printf("value2와 value3이 같고 value1과 value2간의 대소관계가 있습니다.\n");
    }

    return 0;
}

int continue_(){
    int count = 0;
    for(int i = 0; i<100; i++ /*최초에 실행할 구문1;  조건; 마지막에 실행될 구문2*/){
        /*반복할 코드*/
        count = count + 1;
    }
    printf("count : %d\n", count);
    return 0;

    // while (/* condition */)
    // {
    //     /* code */
    // }
    

    // if (/* condition */)
    // {
    //     /* code */
    // }
    
}

int plus(int a, int b){
    int result = a+ b;
    return result;
}

int minors(int a, int b){
    int result = a-b;
    return result;
}

int squrt(int a, int b){
    int result = a;

    for(int i = 1; i<b; i++){
        result = result * a;
    }
    return result;
}

int task1(int input1, int input2, int operation){

    int result;

    if(operation == 0){
        result = plus(input1, input2);
        return result;
    }
    else if (operation == 1)
    {
        result = minors(input1, input2);
        return result;
    }
    else if (operation == 2)
    {
        result = squrt(input1, input2);
        return result;
    }
    else{
        printf("변수 operation이 0,1,2 중에 속하지 않습니다.\n");
        return 0;
        /*  break statement may only be used within a loop or switchC/C++(116) */
    }
    
    
}

int main(){
    int count_num,input1,input2,operation;

    condition(30, 20, 10);
    continue_();

    printf("숫자를 입력해 주세요:");

    fseek(stdin, 0, SEEK_END); /*fseek 함수는 바이너리 함수중 하나로, 파일 위치를 원하는 데에 옮기면서 파일을 읽을 수 있다.*/
    /* SEEK_SET 파일 맨 앞에서 이동 시작, SEEK_CUR 현재 위치에서, SEEK_END 마지막 위치에서 이다/*/

    /*따라서 scanf함수를 사용하기 직전에 위에처럼 사용해준다.*/
    scanf("%d", &count_num);

    printf("\n");

    for(int i=0; i<count_num; i++){
        printf("a");

    }

    printf("\n프로그램 종료 \n\n\n");

    printf("과제 프로그램 실행에 필요한 input1, input2, operation 값을 입력해 주세요: \n");

    fseek(stdin, 0, SEEK_END);
    scanf("%d %d %d", &input1, &input2, &operation);

    /* 이렇게 하면 한 숫자씩 타이핑 해도 읽어짐 */

    int result = task1(input1, input2, operation);
    
    printf("result : %d", result);


}