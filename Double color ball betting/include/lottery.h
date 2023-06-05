#ifndef LOTTERYH
#define LOTTERYH
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <string.h>
#define random(x)(rand()%x+1)
#define BALL_TOTAL_CNT 7
#define RED_BALL 33
#define BLUE_BALL 16
int isExisting(char ballNum,char ballArray[][BALL_TOTAL_CNT],int m,int x);
int Fun(char ballArray[][BALL_TOTAL_CNT],int n,int m);
int FUZHI();
extern int T;
extern int grpCnt;
extern int l;
struct Lotteryltem
{
    char addrldx[20];
    int grpldx;
    char timeStamp[30];
    char ballArray[7];
};
FILE *stream;
void TouZhu(char ballArray[][BALL_TOTAL_CNT],struct Lotteryltem stu[100]);
void writeFile(struct Lotteryltem stu[100]);
void readFile(struct Lotteryltem dmu[100]);
#endif // LOTTERYH_h
