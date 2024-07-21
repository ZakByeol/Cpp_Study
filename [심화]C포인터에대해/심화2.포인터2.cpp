#include "../Header.h"

void swap(int* a,int* b /*주소값을 파라미터로! */){
    int swap_value;
    swap_value = *a;
    *a = *b;
    /* a가 가르키는 데이터에 b가 가르키는 데이터를 저장 */

    *b = swap_value;
    /* b가 가르키는 데이터에 swap_value 즉. */
    /* a가 가르키는 데이터를 저장 */
}

void inperence_type(int& a, int& b){
    /* int& a는 a 값을 그대로 가져옴 */
    int swap_value;
    swap_value = a;
    a = b;

    b = swap_value;


}

void default_fun(){

    int value_1 = 100;
    int value_2 = 200;

    printf("변경 전 데이터 : \n");
    printf(" value_1 = %d\n value_2 = %d\n", value_1, value_2);


    swap(&value_1, &value_2);
        printf("변경 후 데이터 : \n");
    printf(" value_1 = %d\n value_2 = %d\n", value_1, value_2);



}

int main(){

    

}