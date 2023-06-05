/*******************************************************************
Copyright (C) 2018 - All Rights Reserved by
重庆邮电大学唐艺倬
文 件 名: main.c
作    者: 唐艺倬
编写日期: 2021.12.7
说    明: 编写双色球投注程序
要    求：投多注号码，单注查重排序并存储
历史纪录:
  <作者>	<日期>		  <版本>		<内容>
1、唐艺倬 	2021.12.21     3.1.0	        1. 编写双色球；

*******************************************************************/
#include"../include/lottery.h"
int T;
int grpCnt;
int l;
int main()
{
    char ballArray[100][BALL_TOTAL_CNT];
    struct Lotteryltem stu[100];
    struct Lotteryltem dmu[100];

    memset(stu,0,100*sizeof(struct Lotteryltem));

    grpCnt=0;
    l=0;
end:
    T=FUZHI();
    switch(T)
    {
    case 1:
        TouZhu(ballArray,stu);
        goto end;
        break;
    case 2:
        readFile(dmu);
        goto end;
        break;
    case 3:
        break;
    }
    return 0;
}
