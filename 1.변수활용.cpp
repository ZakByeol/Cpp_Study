#include <stdio.h>


int valuepractice(void) {

    int value_name = 100;
    int Value_name = 10;
    // value_name 이라는 이름의 변수를 선언, 해당 변수에 100 정수값을 저장함
    // Cpp에서는 변수의 첫번째 문자는 알파벳,언더바로 시작
    printf("Hello World!\n");
    printf("안녕 세상아!\n");
    // print함수는 "~"의 문자열을 콘솔창으로 출력한다.
    // 해당 문자열에서 줄바꿈을 하기 위해, \n 을 사용하면 된다.

    printf("변수 Value_name은 %d 으로 할당되어 있습니다.\n", Value_name);


    // 포멧팅으로, %d(정수)에 변수 Value_name 을 치환한다.

    return 0;


}
