//
// Created by 배건우 on 2024. 7. 13..
//
#include "../0실행용파일/Header.h"

class GameUnit
{
public:
    int health_value;
    int attack_value;
    int range_value;
    int speed_value;
    char unit_name[50];
    char weapon[50];

    GameUnit(const char* name,int health_value,int attack_value,int range_value,int speed_value){
        strcpy(this->unit_name, name);
        this->health_value = health_value;
        this->attack_value = attack_value;
        this->range_value = range_value;
        this->speed_value = speed_value;
    }
    void getUnitInfo(){
        printf("종족명 : %s\n", unit_name);
        printf("장착된 무기 : %s\n", weapon);
        printf("최대 체력 : %d\n", health_value);
        printf("공격력 : %d\n", attack_value);
        printf("사정 거리 : %d\n", range_value);
        printf("이동 속도 : %d\n\n", speed_value);
    }
};

class Goblin : public GameUnit{
public:
    Goblin(const char* weapon) : GameUnit("고블린",60,5,10,10)
    {
        strcpy(this->weapon, weapon);
    }
};
class Oak : public GameUnit{
public:
    Oak(const char* weapon) : GameUnit("오크",80,10,12,8)
    {
        strcpy(this->weapon, weapon);
    }
};
class Slime : public GameUnit{
public:
    Slime(const char* weapon) : GameUnit("슬라임",100,3,5,4)
    {
        strcpy(this->weapon, weapon);
    }
};
class Skeleton : public GameUnit{
public:
    Skeleton(const char* weapon) : GameUnit("해골궁수",60,20,50,3)
    {
        strcpy(this->weapon, weapon);
    }
};

int main(){
    GameUnit* unit[5];
    Goblin* goblin = new Goblin("고블린의 도끼");
    Oak* oak = new Oak("오크의 거대한 망치");
    Skeleton* skeleton = new Skeleton("스켈레톤의 평범한 활과 화살");
    Slime* slime = new Slime("슬라임의 끈적한 점액");

    unit[0] = goblin;
    unit[1] = oak;
    unit[2] = slime;
    unit[3] = skeleton;



    for (int i = 0; i <= 3; ++i) {
        unit[i]->getUnitInfo();
        delete unit[i];
    }
}
