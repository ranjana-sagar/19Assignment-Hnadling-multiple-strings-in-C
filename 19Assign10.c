#include<stdio.h>
#include<string.h>
int main()
{
    char idp[3][2][20]={{"ranjana","123"},{"priya","priyu@123"},{"sweta","zxcvbn"}};
    char user[2][20];
    int i,j;
    for(i=0;i<=1;i++)
    {
        i==0?printf("Enter your username:"):printf("Enter your password:");
        gets(user[i]);
        fflush(stdin);
    }
    for(i=0;i<=2;i++)
        if((strcmp(user[0],idp[i][0]))==0 && (strcmp(user[1],idp[i][1]))==0)
           break;
    ///////////////////////////////////////////////////////////////////////////////////       
    i>2?printf("Unautherized user!"):printf("Login Successfully!");
    return 0;
}