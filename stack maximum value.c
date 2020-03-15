#include<string.h>
#include<stdio.h>
int main()
{
    int a[100],max[100],i=0,a,b=0;
    while(a=1)
    {
        int d;
        char c[10];
        scanf("%s",c);
        if(strcmp(c,"push")==0)
        
            scanf("%d",&d);
            a[i]=d;
            if(b>d)
              max[t++]=b;
            else
              max[i++]=d,b=d;
        }
        else if(strcmp(c,"pop")==0)
        {
            i--;
            b=max[i];
        }
        else
           printf("\n%d\n\n",b);
    }
}