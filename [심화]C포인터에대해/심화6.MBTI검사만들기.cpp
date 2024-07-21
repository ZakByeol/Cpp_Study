#include "../0실행용파일/Header.h"

int getint()
{

}

void getresult(int value1,int value2,int value3,int value4)
{
    char mbti[5];

    if (value1>0)
    {
        mbti[0] = 'E';
    }
    else
    {
        mbti[0] = 'I';
    }

    if (value2>0)
    {
        mbti[1] = 'S';
    }
    else
    {
        mbti[1] = 'N';
    }

    if (value3>0)
    {
        mbti[2] = 'T';
    }
    else
    {
        mbti[2] = 'F';
    }

    if (value4>0)
    {
        mbti[3] = 'P';
    }
    else
    {
        mbti[3] = 'J';
    }
    mbti[4] ='\0'; // null값 할당하기
    printf("당신의 mbti 결과는 %s 입니다.\n", mbti);

    if (strcmp(mbti, "INFJ") == 0)
    {
        printf("너 나랑 mbti 같구나!\n");
    }
    else
    {
        printf("너 나랑 mbti 다르구나!\n");
    }
}

int main()
{
    int score_IE = 0;
    int score_NS = 0;
    int score_TF = 0;
    int score_JP = 0;
    char answer[10];

    printf("외향적(E)입니까 내향인(I) 입니까? : \n");
    scanf("%s", answer[0]);
    if (answer[0] == 'I')
    {
        score_IE = 1;

    }
    else
    {
        score_IE = -1;
    }

    while(true)
    {
        if (answer[0] == 'I')
        {
            score_IE = 1;

        }
        else if (answer[0] == 'E')
        {
            score_IE = -1;
        }
        else
        {
            printf("알맞지 않는 선택 입니다. 다시 입력해 주세요 : \n");
        }
    }


    getresult(score_IE,score_NS,score_TF,score_JP);

    return 0;
}

