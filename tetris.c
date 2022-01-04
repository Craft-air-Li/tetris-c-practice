#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Set_coordination(int **cent, int a, int b, int c, int d, int e, int f, int g, int h)
{
    cent[0][0] = a;
    cent[0][1] = b;
    cent[1][0] = c;
    cent[1][1] = d;
    cent[2][0] = e;
    cent[2][1] = f;
    cent[3][0] = g;
    cent[3][1] = h;
    return;
}

void B_type_produce(int **center, int type, int spin)
{
    switch (type)
    {
    case 0: //긴 막대
        switch (spin)
        {
        case 0:
            Set_coordination(center, -1, 0, 0, 0, 1, 0, 2, 0);
            return;
        case 1:
            Set_coordination(center, -1, 0, 0, 0, 1, 0, 2, 0);
            return;
        case 2:
        case 4:
        }
    case 1:
        switch (spin)
        {
        case 0:
        case 1:
        case 2:
        case 4:
        }
    case 2:
        switch (spin)
        {
        case 0:
        case 1:
        case 2:
        case 4:
        }
    case 3:
        switch (spin)
        {
        case 0:
        case 1:
        case 2:
        case 4:
        }
    case 4:
        switch (spin)
        {
        case 0:
        case 1:
        case 2:
        case 4:
        }
    case 5:
        switch (spin)
        {
        case 0:
        case 1:
        case 2:
        case 4:
        }
    case 6:
        switch (spin)
        {
        case 0:
        case 1:
        case 2:
        case 4:
        }
    }
}

int main(void)
{
    int i, j, B_type, N_B_type, Spin, N_Spin;
    int *Loc;
    int **B_center, **N_B_center;
    char ***G;
    clock_t start;

    //그래픽의 30x30부분 생성
    G = (char ***)malloc(sizeof(char **) * 30);
    for (i = 0; i < 30; i++)
    {
        G[i] = (char **)malloc(sizeof(char *) * 30);
    }
    // 블록의 좌표를 담을 공간
    B_center = (int **)malloc(sizeof(int *) * 4);
    for (i = 0; i < 4; i++)
    {
        B_center[i] = (int *)malloc(sizeof(int) * 2);
    }
    // 다음 블록의 좌표를 담을 공간
    N_B_center = (int **)malloc(sizeof(int *) * 4);
    for (i = 0; i < 4; i++)
    {
        N_B_center[i] = (int *)malloc(sizeof(int) * 2);
    }
    // 블록의 중심 위치
    Loc = (int *)malloc(sizeof(int) * 2);
    Loc[0] = 4;
    Loc[1] = 14;

    //기본 테두리 생성
    for (i = 0; i < 30; i++)
    {
        for (j = 0; j < j; j++)
        {
            if (i == 25 && j > 8 && j < 21)
            {
                G[i][j] = "▩";
            }
            else if (j == 9 && i > 4 && j < 26)
            {
                G[i][j] = "▩";
            }
            else if (j == 20 && i > 4 && j < 26)
            {
                G[i][j] = "▩";
            }
            else
            {
                G[i][j] = "  ";
            }
        }
    }

    // 시간 시작
    srand(time(NULL));

    // 난수로 각 블록의 종류 및 회전방향 설정
    B_type = rand() % 7;
    N_B_type = rand() % 7;
    Spin = rand() % 4;
    N_Spin = rand() % 4;
}