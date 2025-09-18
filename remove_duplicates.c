/*
Name : Jerry
Date :
Description :
Input :
Output :
*/

#include<stdio.h>
void duplicate(int arr[],int size,int arr1[],int *newsize);
int main()
{
int size;
scanf("%d",&size);
int count=1;
int arr[size],arr1[size];
for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
duplicate(arr,size,arr1,&count);
for(int i=0;i<count;i++)
    printf("%d ",arr1[i]);
printf("\n");
    return 0;
}
void duplicate(int arr[],int size,int arr1[],int *count)
{
    arr1[0]=arr[0];
    for(int i=1;i<size;i++)
    {
	int flag=1;
	for(int j=0;j<i;j++)
	{
	if(arr[i]==arr1[j])
	{
	    flag=0;
	    break;
	}
	}
	if(flag)
	{
	arr1[*count]=arr[i];
	(*count)++;
	}
    }
}




