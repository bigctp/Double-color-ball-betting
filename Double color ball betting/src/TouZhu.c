#include"../include/lottery.h"
void TouZhu(char ballArray[grpCnt][BALL_TOTAL_CNT],struct Lotteryltem stu[100])
{
    printf("*******投注中***********\n");
    printf("1-机选   2-手动   3-返回\n");
    printf("*******投注中***********\n");
    printf("请输入投注方式：");
    int n,c,g;
    scanf("%d",&g);
    if(g==1)
    {
        printf("请输入投注数量：");
        scanf("%d",&grpCnt);
        srand((unsigned)time(NULL));
        for(n=l; n<=l+grpCnt-1; n++)
        {
            int i=0;
            ballArray[n][i]=random(RED_BALL);
            for(i=1; i<=6; i++)
            {
                if(i<6)
                {
                    ballArray[n][i] =random(RED_BALL);
                    if(isExisting(ballArray[n][i],ballArray,i,n)!=0)
                        i--;
                }
                if(i==6)
                {
                    Fun(ballArray,i,n);
                    for(c=0; c<i; c++)
                    {
                        printf("%d\t",ballArray[n][c]);
                    }
                    ballArray[n][i]=random(BLUE_BALL);
                    printf("%d\n",ballArray[n][i]);
                }
            }
        }
        int i,q;
        time_t rawtime;
        struct tm*timeinfo;
        time(&rawtime);
        timeinfo=localtime(&rawtime);
        for(i=l; i<=grpCnt+l-1; i++)
        {
            strcpy(stu[i].addrldx,"重庆邮电大学逸夫楼");
            stu[i].grpldx=i+1;
            strcpy(stu[i].timeStamp,asctime(timeinfo));
            for(q=0; q<=6; q++)
            {
                stu[i].ballArray[q]=ballArray[i][q];
            }
        }
        writeFile(stu);
    }
    if(g==2)
    {
        printf("请输入投注数量：");
        scanf("%d",&l);
        for(n=grpCnt; n<=grpCnt+l-1; n++)
        {
            int i,J;
            for(i=0; i<=6; i++)
            {
                scanf("%d",&J);
                ballArray[n][i]=J;
            }
            printf("\n");
            Fun(ballArray,i-1,n);
            for(c=0; c<6; c++)
            {
                printf("%d\t",ballArray[n][c]);
            }
            printf("%d\n",ballArray[n][6]);
        }
        int i,q;
        time_t rawtime;
        struct tm * timeinfo;
        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        for(i=grpCnt; i<=grpCnt+l-1; i++)
        {
            strcpy(stu[i].addrldx,"重庆邮电大学逸夫楼");
            stu[i].grpldx=i+1;
            strcpy(stu[i].timeStamp,asctime(timeinfo));
            for(q=0; q<=6; q++)
            {
                stu[i].ballArray[q]=ballArray[i][q];

            }
        }
        writeFile(stu);
        return 0;
    }
    if(g==3)
        return 0;
}
