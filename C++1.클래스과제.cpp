#include "../0실행용파일/Header.h"

// Header 파일에
// int number_counter = 1;
// int getInt(const char* prompt);
// char* getSrting(const char* prompt);
// 작성하셈

class Management
{
public:
    int company_number;
    char name[20];
    int gender;
    char company_rank[20];

    Management(char* name,int gender,char* company_rank)
    {
        this->company_number = number_counter;
        number_counter += 1;

//        name = new char[strlen(name)+1];
        strcpy(this->name, name);

        this->gender = gender;

//        company_rank = new char[strlen(company_rank)+1];
        strcpy(this->company_rank, company_rank);

//        delete name;
//        delete company_rank;
//        해당 구문들은 동적할당을 하고, 삭제할시, 없어짐;;
//        전의 학습파일에도 이렇게 했었는데, 그때도 뒤의 구문이 없었다면 사라지는거임.

    }

    void getinfo(){
        printf("사원 번호 : %d\n", company_number);
        printf("이름 : %s\n", name);
        printf("성별 : %s\n", gender == 0 ? "남자" : "여자");
        printf("사원 직급 : %s\n\n", company_rank);
    }
};

int main()
{

    Management* employee[100];
    int count = 0;

    while (true)
    {
        int select;
        printf("사원을 추가하시려면 0,삭제하시려면 1, 한번에 리스트를 보시려면 2를 입력해주세요 : \n");
        printf("(종료하시려면 3를 입력해주세요)\n");
        fseek(stdin,0,SEEK_END);
        scanf("%d", &select);
        if (select == 0)
        {
            // 사원 추가
            char* name = getSrting("사원명을 입력해주세요 :\n");
            int gender = getInt("성별을 입력해 주세요(0남성 1여성) : \n");
            char* company_rank = getSrting("사원 직급을 입력해 주세요 : \n");

            Management* m = new Management(name,gender,company_rank);
            // 'delete' applied to a pointer that was allocated with 'new[]'; did you mean 'delete[]'?

            // delete m; 없어야함
            delete[] name;
            delete[] company_rank;

            employee[count] = m;
            count++;

            // delete m; 없어야함 :: 해당 구문이 있으면 employee[count] 안에 저장해둔 m이 사라지기 때문임

        }
        else if (select == 1)
        {
            // 사원 삭제
            int number = getInt("사원 번호를 입력해주세요 : \n");
            int delete_Index = 0;

            for (int i = 0; i < count; ++i)
            {
                if (number == employee[i]->company_number)
                {
                    delete employee[i];
                    delete_Index = i;
                }
                // 뒷 번호를 앞 당기기
            if (delete_Index>=0)
            {
                for (int j = delete_Index; j < count; ++j)
                {
                    employee[i] = employee[i + 1];
                }
            }

            }
        }
        else if (select == 2)
        {
            // 사원 불러오기
            for (int i = 0; i < count; ++i)
            {
                employee[i]->getinfo();
            }

        }
        else if (select == 3)
        {
            // 종료하기
            break;
        }
        else
        {
            printf("재입력 : \n");
        }
    }
}

int getInt(const char* prompt){
    int input;
    printf("%s", prompt);
    fseek(stdin,0,SEEK_END);
    scanf("%d", &input);
    return input;
}

char* getSrting(const char* prompt){
    char* input = new char[100];
    printf("%s", prompt);
    fseek(stdin,0,SEEK_END);
    scanf("%99[^\n]s", input);
    return input;
}