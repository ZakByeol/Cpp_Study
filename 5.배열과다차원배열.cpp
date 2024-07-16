#include <stdio.h>

int ex_array(){
    int name[10];

    name[0] = 1;
    /* 배열 array는 0부터 순서가 시작된다. */
    /* 배열 0번쨰에 숫자 1 을 저장하는 코드이다. */

    int Arraylist[5] = { 1, 5, 10, 20, 100};
    for (int i = 0; i < 5; i++)
    {
        printf("Arraylist[%d] : %d\n", i, Arraylist[i]);
    }
    

    return 0;
}

// int error_code1(){
//     int value[3];

//     value[3] = 10;

//     printf("Hello World!");

//     return 0;

//     /* 해당 코드는 C언어의 프로그래밍적 자유도 떄문에 에러가 뜸 (포인터) */
// }

int ex_multiArray(){
    int multiArray[3][3] ={

    { 1, 2, 3},
    { 4, 5, 6},
    { 7, 8, 9}

    };
    /* 다차원 배열 작성 방법 */
    return 0;
}

int task1(){
    /* 크기가 20인 배열을 만들고, 각각의 배열 원소에 2의 배수 */
    /* 의 수열을 할당하고 해당 배열을 출력하세요! */

    int task1_array[20];
    for (int i = 0; i < 20; i++)
    {
        task1_array[i] = i*2 + 2;
        printf("task1_array[%d] : %d\n", i, task1_array[i]);

    }
    
    return 0;
}

int task2(){

    /* 크기가 20인 배열을 만들고 각각의 배열 원소에 */
    /* 피보나치 수열을 할당하여 해당 배열을 출력하세요 */

    int array[20];

    for (int i = 0; i < 20; i++)
    {
        if (i<2)
        {
            array[i] = 1;
            printf("array[%d] : %d\n", i,array[i]);
        }
        else
        {
            array[i] = array[i-2] + array[i-1];
            printf("array[%d] : %d\n", i,array[i]);
        }

        
    }
    
    return 0;
}

int task3(){

    /* 크기가 10x10인 이차원 배열을 만들고 각각의 배열 원소에 */
    /* 원소를 1~100까지 할당한 후 해당 배열을 출력하세요 */

    int multiarray[10][10];
    int value = 1;

    for(int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 10; k++)
        {
            multiarray[k][i] = value;
            printf("multiarray[%d][%d] : %d\n",k,i,multiarray[k][i]);
            value++;
        }
        
    }
    
    return 0;
}

int task4(){

    /* 5x5인 이차원 배열 세개를 만들고, 첫번쨰 배열은 순서대로 할당하고 */
    /* 두번쨰 배열은 2의 배수로 할당하며 세번쨰 배열은 두 배열의 동일한 인덱스에 존재하는 */
    /* 원소들의 합으로 할당한 후 해당 배열을 출력하세요 */
    int array_1[5][5];
    int array_2[5][5];
    int array_3[5][5];

    int count = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            array_1[i][k] = count;
            count++;
            printf("array_1[%d][%d] : %d\n", i,k,array_1[i][k]);
        }
        
    }
    printf("\n");

    count = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            array_2[i][k] = count*2;
            count++;
            printf("array_2[%d][%d] : %d\n", i,k,array_2[i][k]);
        }
        
    }
    printf("\n");

    count = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            array_3[i][k] = array_1[i][k] + array_2[i][k];
            count++;
            printf("array_3[%d][%d] : %d\n", i,k,array_3[i][k]);
        }
        
    }
}

int main(){

    task4();
}