/*
Name : Jerry
Date : 03-05-2024
Description :WAP to find the median of two unsorted arrays
Input :
Output :
 */
#include<stdio.h>

int main()
{
    int M,N,var,temp=0;
    float medeven1=0,medeven2=0,medodd1=0,medodd2=0,avg;
    printf("Enter the 'n' value for Array A: ");
    scanf("%d",&M);
    printf("Enter the 'n' value for Array B: ");
    scanf("%d",&N);
    int array1[M],array2[N];
    printf("Enter the elements one by one for Array A:");
    for(int i=0;i<M;i++)
	scanf("%d",&array1[i]);
    printf("Enter the elements one by one for Array B:");
    for(int i=0;i<N;i++)
	scanf("%d",&array2[i]);
//bubblesort
    for(int i=0;i<M-1;i++)                                 //swaping occurs for size minus one times                                   
    {
	for(int j=0;j<M-i-1;j++)                           //inner swaping and it decrements by one
	{
	    if(array1[j]>array1[j+1])
	    {
		temp=array1[j+1];
		array1[j+1]=array1[j];
		array1[j]=temp;
	    }
	}
    }

    if(M%2)                                                //if size is odd takes the middle element
    {
	var=M/2;
	printf("Median of array1 :%d\n",array1[var]);
	medodd1=array1[var];
    }
    else                                                   //if its even takes the average of two middle elements
    {
	int var=M/2;
	medeven1=(float)(array1[var]+array1[var-1])/2;
	printf("Median of array1 :%g\n",medeven1);
    }



    for(int i=0;i<N-1;i++)                                 //swaping occurs for size minus one times                                   
    {
	for(int j=0;j<N-i-1;j++)                           //inner swaping and it decrements by one
	{
	    if(array2[j]>array2[j+1])
	    {
		temp=array2[j+1];
		array2[j+1]=array2[j];
		array2[j]=temp;
	    }
	}
    }

    if(N%2)                                                //if size is odd takes the middle element
    {
	int var=N/2;
	printf("Median of array2 :%d\n",array2[var]);
	medodd2=array2[var];
    }
    else                                                   //if its even takes the average of two middle elements
    {
	int var=N/2;
	medeven2=(float)(array2[var]+array2[var-1])/2;
	printf("Median of array2 :%g\n",medeven2);
    }


    avg=(medeven1+medodd2+medeven2+medodd1)/2;             //prints the average of two medians
    printf("Median of both arrays :%g\n",avg);


    return 0;
}

