/*
Name : Jerry
Date :
Description :
Input :
Output :
 */
#include<stdio.h>
#include<stdlib.h>
int fragments(int col[], float *ptr[],int row);
int main()
{
    int row;
    printf("Enter the row:");
    scanf("%d",&row);
    float *ptr[row];
    int col[row];
    for(int i=0;i<row;i++)
    {
	printf("Enter no of columns in row[%d] :",i);
	scanf("%d",&col[i]);
	ptr[i]=(float*)malloc((col[i]+1) * sizeof(float));
    }

    for(int i=0;i<row;i++)
    {
	printf("Enter %d values for row[%d] :",col[i],i);
	for(int j=0;j<col[i];j++)
	{
	    scanf("%f",&(*(ptr[i]+j)));
	}
    }

    fragments(col,ptr,row);
    return 0;
}
int fragments(int col[], float*ptr[],int row)
{
    float mean;
    for(int i=0;i<row;i++)
    {
	mean=0;
	int j=0;
	for(j;j<col[i];j++)
	{
	    mean=mean+(*(ptr[i]+j));
	    //printf("%f",mean);
	}
	*(ptr[i]+j)=mean/col[i];
    }

    printf("Before sorting output is:\n");
    for(int i=0;i<row;i++)
    {
	//printf("Enter 4 values for row[%d] :",i);
	for(int j=0;j<=col[i];j++)
	{
	    printf("%f ",*(ptr[i]+j));
	}
	printf("\n");
    }
    for(int i=0;i<row-1;i++)
    {
	for(int j=0;j<row-i-1;j++)
	{
	    if(*(ptr[j]+col[j]) > *(ptr[j+1]+col[j+1]))
	    {
		float *temp=ptr[j];
		ptr[j]=ptr[j+1];
		ptr[j+1]=temp;

		int temp_col = col[j];
                col[j] = col[j+1];
                col[j+1] = temp_col;
	    }
	}
    }
    printf("After sorting output is:\n");
    for(int i=0;i<row;i++)
    {
	//printf("Enter 4 values for row[%d] :",i);
	for(int j=0;j<=col[i];j++)
	{
	    printf("%f ",*(ptr[i]+j));
	}
	printf("\n");
    }

}



