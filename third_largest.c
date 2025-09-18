/*
Name : Jerry
Date :
Description :
Input :
Output :
*/

/*   
read size
   declare array
   read array elements
   int i=0
   run loop(i<=size-n)
   if true -> read elements and store in &arr[i]
   and increment i
   if false -> stop
   
   function call
   int ret=sec_largest(arr,size);
   print the output(ret)

   function prototype
   int sec_largest(int arr[],int size);

   function definition
   int sec_largest(int arr[],int size)
   {
   take large variable and assign it as arr[0]
   i=1
   run the loop(i<=size-1)
   false -> stop
   true -> check arr[i]>large
   true -> update large value as arr[i]
   increment i
   also find smallest same way
   assign secondlargest=smallest
   run loop
   check arr[i]<large && arr[i]>secondlarge
   true -> update secondlarge
   false -> increment

   print secondlarge

   assign thirdlarge=smallest
   run loop
   check three conditions
   true-> update
   false->increment
   print third
*/


#include<stdio.h>
int third_largest(int arr[], int size);
int main()
{
int size,ret;
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
ret = third_largest(arr, size);
printf("Second largest element of the array is %d\n",ret);
    return 0;
}
int third_largest(int arr[], int size)
{
    int large=arr[0];
    for(int i=0;i<size;i++)
    {
	if(arr[i]>large)
	    large=arr[i];
    }
    int small=arr[0];
    for(int i=0;i<size;i++)
    {
	if(arr[i]<small)
	    small=arr[i];
    }
    int second=small;
    for(int i=0;i<size;i++)
    {
	if(arr[i]<large && second<arr[i])
	    second=arr[i];
    }
    int third=small;
    for(int i=0;i<size;i++)
    {
	if(arr[i]<large && second>arr[i] && third<arr[i])
	    third=arr[i];
    }

    return third;
}




