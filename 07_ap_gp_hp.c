/*
Name : Jerry
Date : 24-04-2024
Description : WAP to generate AP, GP, HP series
Input :
Output :
 */
#include<stdio.h>

int main()
{
    int A,N,R;
    printf("Enter the First Number 'A':");
    scanf("%d",&A);
    printf("Enter the Common Difference / Ratio 'R':");
    scanf("%d",&R);
    printf("Enter the number of terms 'N':");
    scanf("%d",&N);
    if(N>1)                             //checks the number of term is greator than one
    {
	int AP=A;
	printf("AP=%d ",AP);
	for(int i=0;i<N-1;i++)          //loop for contious generation of AP
	{
	    AP=AP+R;
	    printf("%d ",AP);
	}
	printf("\n");

	int GP=A;
	printf("AP=%d ",GP);
	for(int i=0;i<N-1;i++)         //loop for continous generation of GP
	{
	    GP=GP*R;
	    printf("%d ",GP);
	}
	printf("\n");


	float HP;
	int AP1=A;
	printf("HP= ");
	for(int i=0;i<=N-1;i++)       //loop for continous generation of HP
	{
	    HP=1/(float)AP1;
	    printf("%f ",HP);
	    AP1=AP1+R;
	}
	printf("\n");

    }
    else
	printf("Invalid input\n");
    return 0;
}

