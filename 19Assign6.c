#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][30];
    int i,j,l=0;
    for(i=0;i<=4;i++)
    {
        printf("Enter %dst string:",i+1);
        gets(str[i]);
        fflush(stdin);
    }
    for(i=0;i<=4;i++)
    {
        l=strlen(str[i]);
        l-=1;
        for(j=0;j<=l;j++,l--)
            if(str[i][j]!=str[i][l])
               break;
        if(j>l)       
            printf("\"%s\" is palindrome\n",str[i]);       
    }
    return 0;
}