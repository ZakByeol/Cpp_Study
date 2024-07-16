#include "Header.h"

int strcpy_code(){


    char inputstring[100];
    /* 유동적인 크기를 가지려면 포인터 사용 */

    printf("문자열을 입력해주세여 : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%99[^\n]s",inputstring);
    /* &는 문자열을 입력받을때 사용하지 않는다. */

    /* Null terminated String */
    /* C/C++의 문자열 처리 방식으로, \0 혹은 0 (널값)을
       끝으로 저장 */

    char duplicatedString[100];
    strcpy(duplicatedString, inputstring);
    /* strcpy 는 cstring 헤더파일에 있는 함수이며 */
    /* 문자열을 복사해주는 함수이다. */

    /* 이렇게 정의하는 까닭은 포인터 떄문임 */

    printf("입력값 : %s", duplicatedString);

    return 0;
}

int strcmp_code(){
    char str1[100];
    char str2[100];

    strcpy(str1, "HelloA");
    strcpy(str2, "HelloB");

    
    if (strcmp(str1,str2) == 0)
    {
        printf("두 문자열의 내용이 같습니다.");
    }
    else if (strcmp(str1,str2) == -1)
    {
        printf("str1의 사전적 우선도가 높습니다. ");
    }
    else if (strcmp(str1, str2) == 1 )
    {
        printf("str1의 사전적 우선도가 낮습니다.");
    }
    
    
    /* cstring에 있으며 , 문자열 두개를 파라미터로 받아
       문자열을 비교해주는 함수 */
    /* 사전적 우선도, 사전적으로 우선시 되는 문자 */
    

    return 0;
}

int training_1(){
    char input1[100];
    char input2[100];

    printf("문자열을 입력해주세여 : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%99[^\n]s",input1);

    printf("문자열을 입력해주세여 : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%99[^\n]s",input2);

    if (strcmp(input1, input2) == 0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    
    
    return 0;
}

int training_2(){
    
    char char_value1[100];
    char char_value2[100];

    getstring(1);
    strcpy(char_value1, string_value);
    getstring(2);
    strcpy(char_value2, string_value);

    bool bool_value = strcmp_code(char_value1, char_value2);

    if (bool_value == true)
    {
        printf("두 문자열은 같습니다. ");
    }
    else if (bool_value == false)
    {
        printf("두 문자열은 다릅니다. ");
    }

    return 0;
}


int training_3(){

    char char_value1[100];
    char char_value2[100];

    getstring(1);
    strcpy(char_value1, string_value);

    int endline;

    for (int i = 0; i < 100; i++)
    {
        if (char_value1[i] == '\0')
        {
            endline = i;
            break;
        }
        else
        {
            continue;
        }
        
    }

    char hanoi_top[endline];

    for (int j = 0; j <= endline; j++)
    {
        hanoi_top[j] = char_value1[endline-j];
    }

    strcpy(char_value2, hanoi_top);

    printf("%s", char_value2);

    return 0;
}

int training3_correct(){

    char char_value1[100];
    char char_value2[100];

    getstring(1);
    strcpy(char_value1, string_value);

    int endline; /* Null 문자열 찾기 */
    for (int i = 0; i < 100; i++)
    {
        if (char_value1[i] == '\0')
        {
            endline = i;
            break;
        }
        else
        {
            continue;
        }
    }

    char hanoi_top[endline-1];
    for (int i = endline-1; i >= 0; i--)
    {
        hanoi_top[endline - i] = char_value1[i];
    }
    strcpy(char_value2, hanoi_top);

    printf("%s \n", char_value2);
    return 0;

}

int main(){
    training3_correct();
}