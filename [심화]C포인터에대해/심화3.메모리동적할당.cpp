#include "../Header.h"

void pointer_array(){

    /* 
        정확히는 아니지만, 
        "배열 변수명"은 '포인터' 라고 볼 수 있다.
        배열명'[n]' 는 해당 주소값(배열명)에서 
        n번쨰 값을 가져오느냐 라는 의미이다. 
    */

   int myArray[100];
   int* pmyArray = myArray;

   pmyArray[0] = 100;

   printf("pmyArray[0] = %d\n", pmyArray[0]);
   printf("myArray[0] = %d\n", myArray[0]);

   int v1 = 100;
   int* pv1 = &v1;

   printf("v1 = %d\n", v1);
   printf("*pv1 = %d\n", *pv1);
   printf("pv1[0] = %d\n", pv1[0]);


   /* *pv = pv[0]*/ 

}

void char_pointer(){
    char input[100];
    const char* mysting = "Helloworld";
    // 상수 이기 때문에 strcpy 안됨

    printf("%s",mysting ); // result : Helloworld
}

struct Marine
{
    int hp;
    int mp;
    char name[100];
};
Marine* foo(){ // 구조체 포인터 자료형인 foo함수
    Marine* m= (Marine*)malloc(sizeof(Marine));
    (*m).hp = 10; // m hp에 10 저장
    (*m).mp = 50; // m mp에 50 저장
    strcpy((*m).name, "Jim Raynor"); // 이름 할당
    return m; // 이 m의 주소를 리턴
}

void dongjeok_hip_pointer(){
    Marine* m = foo();
    // Marin 구조체 포인터인 m에 foo() 리턴값을 할당
    printf("%s", (*m).name);
}

void test(){
   int v1 = 100;
   int* pv1 = &v1;

   printf("v1 = %d\n", v1);
   printf("*pv1 = %d\n", *pv1);
   printf("pv1[0] = %d\n", pv1[0]);
}

/* cm + k , c */
void task1(){
    // 사용자로부터 숫자를 입력받아 배열의 동적할당을 활용해 입력받은 숫자 만큼의 크기를 갖는
    // 배열을 만들고 해당 배열에 짝수로 증가하는 수열을 저장한 뒤 배열을 출력하세요.

    int count;
    // int* pcount;
    printf("숫자를 입력하세요 : \n");
    fseek(stdin, 0,SEEK_END);
    scanf("%d", &count);

    // int array_task[*px];
    // for (int i = 1; i <= *px; i++)
    // {
    //     array_task[i] = i*2;
    //     printf(" array_double[%d] = %d\n",i, array_task[i]);
    // }

    int* array_task = (int*)calloc(count, sizeof(int));
    for (int i = 0; i < count; i++)
    {
        array_task[i] = (int)(i*2+2);
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", array_task[i]);
    }
    
    free(array_task);


}

int main(){
    task1();
}