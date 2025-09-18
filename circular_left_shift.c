/*
Name : Jerry
Date : 13-05-2024
Description :
Input :
Output :
 */
#include<stdio.h>
int replace1(int num,int n,int p);          //function declaration
int main()
{
    int num,n,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter number of bits:");
    scanf("%d",&n);
    int p=31; 
   num= replace1(num,n,p);                      //function call
   for(int i=31;i>=0;i--)
    {
        if(num&(1<<i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
   return 0;
}
int replace1(int num,int n,int p)          //function definition
{
    int sum=(num&(((1<<n)-1)<<((p+1)-n)));
    num=num<<n;
    if(num>0)
    return (num | (sum>>((p+1)-n)));
    else
    return (num | (sum>>(((p+1)-n))&((1<<n)-1)));
}




