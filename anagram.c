/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i,j,flag,n,m;
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    n=strlen(a);
    m=strlen(b);
    if(n==m)
    {
     for(i=0;i<n;i++)
     {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j]){
                flag=1;
                break;}
        }
        if(flag==0)
            break;
     }
      if(flag==1)
         printf("Anagram");
      else
         printf("Not Anagram");
    }
    else
       printf("Not Anagram");

    return 0;
}
