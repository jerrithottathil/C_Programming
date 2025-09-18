/*
Name : Jerry
Date : 16-05-2024
Description :WAP to implement Circular right shift
Input :
Output :
*/
#include<stdio.h>
int replace1(int num,int n,int p);          //function declaration
int main()
{
    int num,n,sum=0;
 //   printf("Enter the number:");
    scanf("%d",&num);
//    printf("Enter number of bits:");
    scanf("%d",&n);
    int p=31; 
   num= replace1(num,n,p);                  //function call
  printf("Result in Binary: ");
   for(int i=31;i>=0;i--)
    {
        if(num&(1<<i))
            printf("1 ");
        else
            printf("0 ");
    }
    printf("\n");
   return 0;
}
int replace1(int num,int n,int p)          //function definition
{
    int sum=((num&((1<<n)-1))<<((p+1)-n));
    if(num>0)
    return ((num>>n) | sum);
    else
    return (((num>>n)&~(((1<<n)-1)<<((p+1)-n))) | sum);
}

