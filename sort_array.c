/*
Name : Jerry
Date : 28-05-2024
Description : Print the values in sorted order without modifying or copying array
Input :
Output :
*/
#include<stdio.h>
void print_sort(int arr[], int size);
int main()
{
int size;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
print_sort(arr,size);
printf("Original array values ");
for(int i=0;i<size;i++)
    printf("%d ",arr[i]);

return 0;
}

void print_sort(int arr[], int size)
{

int large=arr[0],small=arr[0];
for(int i=0;i<size;i++)
{
    if(arr[i]>large)
	large=arr[i];
}
for(int i=0;i<size;i++)
{
    if(arr[i]<small)
	small=arr[i];
}
printf("After sorting: ");
for(int i=0;i<size;i++)
{
    int ssmall=large;
    printf("%d ",small);
    for(int j=0;j<size;j++)
    {
    if(arr[j]>small && arr[j]<ssmall)
	ssmall=arr[j];
    }
    small=ssmall;
}
printf("\n");
}

