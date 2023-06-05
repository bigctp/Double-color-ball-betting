#include"../include/lottery.h"
void writeFile(struct Lotteryltem stu[100])
{
    stream=fopen("file.txt","w");
    if(stream==NULL)
    {
        printf("The file file.txt was not opened\n");
        exit(-1);
    }
    else
    {
        int i,q;
        for(i=0; i<=grpCnt+l-1; i++)
        {
            fprintf(stream,"%s\n%d\n",stu[i].addrldx,stu[i].grpldx);
            fputs(stu[i].timeStamp,stream);
            for(q=0; q<7; q++)
            {
                fprintf(stream,"%d\t",stu[i].ballArray[q]);
                if(q==6 )
                {
                    fprintf(stream,"\n");
                }
            }
        }
        fclose(stream);
    }
    return 0;
}
