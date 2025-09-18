/*
Name : Jerry
Date :
Description :
Input :
Output :
*/
#include<stdio.h>

int main()
{
int size,sum=0;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

for(int i=0;i<size;i++)
{
    if(i%2)
	sum=sum+arr[i];
}
printf("%d",sum);

//for(int i=0;i<size;i++)
//    printf("%d ",arr[i]);
printf("\n");
    return 0;
}

