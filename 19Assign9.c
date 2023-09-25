#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[6][20]={"ranjana-sagar","vandana123","happy","suhana","deep@123"};
    char user[20];
    int i,x,f=1;
    printf("Enter the username:");
    gets(user);
    for(i=0;i<=5;i++)
    {
        if((strcmp(str[i],user))==0)
        {
            printf("Enter the number for calculate factorial:");
            scanf("%d",&x);
            for(;x;x--)
                f=f*x;
            printf("factorial is %d",f); 
            break;   
        }
    }
    if(i>5)
       printf("Invalid User name.");
    return 0;
}