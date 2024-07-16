#include <stdio.h>

int ex_for(){
    printf("");
    int input;

    for (; ;)
    {
        /* ; ; 는 무한 반복을 한다는 뜻이다. */

        printf("반복문 입니다. 숫자를 입력하세요 : ");
        fseek(stdin, 0 ,SEEK_END);
        scanf("%d", &input);

        if (input == 0)
        {
            continue;/* 반복문의 초기로 돌아간다. */
        }
        else if (input == 1)
        {
            break;/* 반복문을 종료한다. ( 빠져나간다 )*/
        }
        else
        {
            printf("\n반복문의 마지막 입니다.\n");
        }
        
        
        
    }
    
    return 0;
}

int task1(int input_2, int input_1){

    for (int i = 1; i <= input_1; i++)
    {
        for (int k = 1; k <= input_2; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }


    return 0;
}

int task2(int input_1, int input_2){
    for (int i = 0; i < input_2; i++)
    {
        for (int k = 0; k < i+1; k++)
        {
            printf("*");

        }
        printf("\n");
        
    }

    return 0;
    
}

int task3(int input_1, int input_2){
    for (int i = 0; i < input_2; i++)
    {
        for (int k = 0; k < input_1; k++)
        {
            printf("*");
        }
        printf("\n");
        input_1--;
        
    }
    return 0;
}

int ex_task3(int input_1, int input_2){
    for (int i = 0; i < input_2; i++)
    {
        for (int k = 0; k < input_2-i; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}
/* 어우 씨이벌 */

int task4(int input_1){
    for (int i = 0; i < input_1; i++)
    {
        for (int l = 0; l < input_1-i; l++)
        {
            printf(" ");
        }
        
        for (int k = 0; k < i+1; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}

int main(){
    int input_1,input_2;

    printf("가로 세로 크기를 할당해 주세요 : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d",&input_1);

    task4(input_1);
    
}