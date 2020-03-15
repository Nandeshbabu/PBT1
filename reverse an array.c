/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100],b[100],n,i,j;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        j=n-i-1;
        b[j]=a[i];
    }
    printf("The reversed array elements are:");
    for(i=0;i<n;i++)
    {
        printf(" %d",b[i]);
    }
    return 0;
}
