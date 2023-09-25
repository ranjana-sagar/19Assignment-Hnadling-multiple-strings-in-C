#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][15],x[15]={0};
    int i,j;
    for(i=0;i<=9;i++)//user input
    {
        printf("Enter %dst city name:",i+1);
        fgets(str[i],15,stdin);
        fflush(stdin);
    }
    for(i=0;i<9;i++)
       for(j=i+1;j<=9;j++)
           if((strcmp(str[i],str[j]))==1)
           {
               strcpy(x,str[i]);
               strcpy(str[i],str[j]);
               strcpy(str[j],x);
           }
    for(i=0;i<=9;i++)
       printf("%s ",str[i]);
    return 0;          
}