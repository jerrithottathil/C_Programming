/*
Name : Jerry
Date : 10-05-2024
Description : WAP to print all primes using Sieve of Eratosthenes method
Input :
Output :
 */
#include<stdio.h>

int main()
{
    int n,var=2;
    printf("Enter the value of 'n' :");
    scanf("%d",&n);
    int arr[n];

    for(int i=2;i<=n;i++)            //stores array elements upto n
	arr[i]=i;

    for(int i=2;i*i<=n;i++)          //loop runs upto sqaure of the element less than n
    {
	for(int j=i*i;j<=n;j=j+i)    //loop runs as multiple of i and assignes it to zero
	    arr[j]=0;
    }
    for(int i=2;i<=n;i++)            
    {
	if(arr[i])                   //prints only nonzero elements which will be prime
	    printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

