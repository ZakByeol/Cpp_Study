#include "../../Header.h"
#include "TetrisHelper.h"

#define INTERVAL 1.0/60.0

int main()
{
    float prev = (float)clock()/CLOCKS_PER_SEC;
    // 프로그램 시작부터 경과된 시간

    while (true) {
        float curr = (float)clock()/CLOCKS_PER_SEC;
        // 현재 시간
        float dt = curr - prev;
        if (dt<INTERVAL) continue;
        prev = curr;
        printf("%.3f", curr);
    }
    return 0;
    // 허허허허 OS beta 버전 올려버려서 xcode 못 쓴다..
}

