#include "../Header.h"

void test1(){
    int* pointer = nullptr;
    pointer = (int*)calloc(1,sizeof(int));

    *pointer = 10;

    if (pointer == nullptr)
    {
        printf("제로 value가 할당 중\n");
    }
    else
    {
        printf("포인터는 실제 주소를 가르키고 있음 ! \n");
        printf("%d \n", *pointer);
    }

    free(pointer);
    pointer = nullptr;
    printf("%d\n", *pointer);
    
}

struct Human
{
    int hp = 40;
    int atk = 5;
};

void test2(){
    Human* human_pointer[40] = { nullptr, }; // zero value 할당
    for (int i = 0; i < 40; i++)
    {
        human_pointer[i] =  (Human*)malloc(sizeof(Human));
        // human_pointer[i]에 Human* 형태로 힙영역을 할당함 :: 이중 포인터라고 생각하면 되나?
        human_pointer[i]->hp = 40; // hp 수정
        human_pointer[i]->atk = 7;
    }
    for (int i = 0; i < 40; i++)
    {
        printf("human_pointer[%d].atk = %d\n",i,human_pointer[i]->atk);
    }
}

void test3(){

    // 위랑 동일함
    Human** human;
    human = (Human**)calloc(20, sizeof(Human*));
    for (int i = 0; i < 40; i++)
    {
        human[i] =  (Human*)malloc(sizeof(Human));
        human[i]->hp = 40;
        human[i]->atk = 7;
    }
    for (int i = 0; i < 40; i++)
    {
        printf("human[%d].atk = %d\n",i,human[i]->atk);
    }
}
int main(){
    test2();
    return 0;
}