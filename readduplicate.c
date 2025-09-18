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
int num,flag=0,count=0,i;
scanf("%d",&num);
int arr[5];
arr[0]=num;
    count++;
while(count<5)
{
    printf("Enter element:\n");
    scanf("%d",&num);
    for(int i=0;i<count;i++)
    {
	if(arr[i]==num)
	{
	    printf("Duplicate\n");
	    flag=0;
	    break;
	}
    }
	if(flag==0)
	    break;
	else
	    arr[count]=num;
	count++;
}
    return 0;
}

