/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],d[10000]={0};
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(d[a[i]]==-1)
           continue;
        d[a[i]]++;
        if(d[a[i]]>1)
        {
            printf("%d\n",a[i]);
            d[a[i]]=-1;
        }
    }

    return 0;
}
