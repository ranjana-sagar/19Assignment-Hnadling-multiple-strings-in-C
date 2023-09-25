#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[5][20];
    char w1[20],w2[20];
    int i,l1=-1,l2=-1,min=100000,temp=0;
    for(i=0;i<=4;i++)//string input:
    {
        printf("Enter %dst string:",i+1);
        fgets(str[i],20,stdin);
        fflush(stdin);
    }//////////////////////////////////
    printf("\nEnter first word:");//both words input
    fgets(w1,20,stdin);
    fflush(stdin);
    printf("\nEnter second word:");
    fgets(w2,20,stdin);
    fflush(stdin);
    ////////////////////////////////////
    for(i=0;i<=4;i++)
    {
        if((strcmp(str[i],w1))==0)
            l1=i;
        else if((strcmp(str[i],w2))==0)
           l2=i;
        if(l1!=-1&&l2!=-1)
        {
            temp=abs(l1-l2);
            if(temp<min)
               min=temp;
        }       
    }   
    l1!=-1&&l2!=-1?printf("minimum idstance is %d",min-1):printf("word not found in list of string");
    return 0;
}