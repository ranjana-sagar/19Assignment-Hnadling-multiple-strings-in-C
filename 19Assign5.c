#include<stdio.h>
#include<string.h>
int main()
{
    char str[3][30];
    int i,j;
    for(i=0;i<=2;i++)
    {
        printf("Enter %dst email:",i+1);
        gets(str[i]);
        fflush(stdin);
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;str[i][j];j++)
          if(str[i][j]=='@')
             break;   
        if(str[i][j]==0)
           printf("\"%s\" does not contain '@'\n",str[i]);
    }       
    return 0;
}