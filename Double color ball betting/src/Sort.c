#include"../include/lottery.h"
int Fun(char ballArray[][BALL_TOTAL_CNT],int n,int m)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ballArray[m][i]>ballArray[m][j])
            {
                temp=ballArray[m][i];
                ballArray[m][i]=ballArray[m][j];
                ballArray[m][j]=temp;
            }
        }
    }
}
