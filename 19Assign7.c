#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char ip[5][30],ip2[5][30];
    int i,x=0,count=0;
    for(i=0;i<=2;i++)//For string input:
    {
        printf("Enter %dst IP Addresses:",i+1);
        gets(ip[i]);
        fflush(stdin);
    }
    for(i=0;i<=2;i++)//For string copy:
        strcpy(ip2[i],ip[i]);
    //////////////////////////////    
    for(i=0;i<=2;i++)
    {
        char *a=strtok(ip[i],".");
        for(;a!=0;)
        {
            x=atof(a);
            if(x>=0&&x<=255)
               count+=1;
            else
                break;   
            a=strtok(NULL,".");   
        }
        count==4?printf("(%s) :=Valid IP Addresses\n",ip2[i]):printf("(%s) :=Invalid IP Addresses\n",ip2[i]);
        x=0,count=0;
    }
    return 0;
}
