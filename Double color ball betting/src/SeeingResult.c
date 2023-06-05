#include"../include/lottery.h"
void readFile(struct Lotteryltem dmu[10])
{
    FILE *fp;
    fp=fopen("file.txt","r");
    int i,q;
    if(fp==NULL)
    {
        printf("The file file.txt was not opened\n");
        exit(-1);
    }
    else
    {
        int flag=1;
        for(i=0; flag; i++)
        {
            fscanf(fp,"%s\n",dmu[i].addrldx);
            fscanf(fp,"%d\n",&dmu[i].grpldx);
            if(dmu[i].grpldx==0){break;}
            fgets(dmu[i].timeStamp,30,fp);
            for(q=0; q<7; q++)
            {
                fscanf(fp,"%d\t",&dmu[i].ballArray[q]);
            }
            printf("%s\n",dmu[i].addrldx);
            printf("%d\n",dmu[i].grpldx);
            printf("%s",dmu[i].timeStamp);
            for(q=0; q<7; q++)
            {
                printf("%d\t",dmu[i].ballArray[q]);
            }
            printf("\n");
        }
        fclose(fp);
    }
    return 0;
}
