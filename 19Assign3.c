#include<stdio.h>
#include<string.h>
int main()
{
    char x[4][20];
    int i,j;
    for(i=0;i<=3;i++)
    {
       printf("Enter %dst string",i+1); 
       gets(x[i]);
       fflush(stdin);
    }   
    for(i=0;i<=3;i++)
       printf("\"%s\",",x[i]);
    return 0; 
}