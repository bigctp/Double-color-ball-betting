/*******************************************************************
Copyright (C) 2018 - All Rights Reserved by
�����ʵ��ѧ����پ
�� �� ��: main.c
��    ��: ����پ
��д����: 2021.12.7
˵    ��: ��д˫ɫ��Ͷע����
Ҫ    ��Ͷ��ע���룬��ע�������򲢴洢
��ʷ��¼:
  <����>	<����>		  <�汾>		<����>
1������پ 	2021.12.21     3.1.0	        1. ��д˫ɫ��

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
