#include<stdio.h>
#include<string.h>
int main()
{
    char str[6][20],x[20];
    int i,j;
    for(i=0;i<=5;i++)//input list of string
    {
        printf("Enter the %dst string of list of the string:",i+1);
        fgets(str[i],20,stdin);
        fflush(stdin);
    }
    printf("\nEnter the string that you want to search in the list:");
    fgets(x,20,stdin);//string input
    for(i=0;i<=5;i++)
        if((strcmp(str[i],x))==0)
           break;
    printf(i>5?"\nString not fount in the given list":"\nString found in the given list");
    return 0;
}