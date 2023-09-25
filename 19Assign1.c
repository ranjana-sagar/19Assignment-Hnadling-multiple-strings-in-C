#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][15];
    int i,j,k,count=0;
    for(i=0;i<=4;i++)
    {
        printf("Enter %dst string:",i+1);
        fgets(str[i],15,stdin);
        fflush(stdin);
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;str[i][j];j++)
           if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U')
              count+=1;
        printf("Total no of vowels in %dst string is %d\n",i+1,count);
        count=0;      
    }
    return 0;
}