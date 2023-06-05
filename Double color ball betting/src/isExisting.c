#include"../include/lottery.h"
int isExisting(char ballNum,char ballArray[][BALL_TOTAL_CNT],int m,int x)
{
    int a;
    for(a=0; a<m; a++)
    {
        if(ballNum==ballArray[x][a])
            return 1;
    }
    return 0;
}
