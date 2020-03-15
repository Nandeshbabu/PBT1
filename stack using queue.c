#include<stdio.h>
#include<string.h>
int main()
{
    int queue[10000],stack[10000];
    int i,t=0;
    while(1)
    {
        char ch[10];
        scanf("%s",ch);
        if(strcmp(ch,"push")==0)
        {
            if(t>0)
            {
            for(i=0;i<t;i++)
            {
                stack[i]=queue[i];
            }
            }
            scanf("%d",&queue[0]);
            t++;
            if(t>1)
            {
            for(i=0;i<t-1;i++)
                queue[i+1]=stack[i];
            }
        }
        else if(strcmp(ch,"pop")==0)
        {
            t--;
        }
        else
        {
            for(i=0;i<t;i++)
                printf("%d ",queue[i]);
        }
    }
}