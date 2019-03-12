#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",(i+j)*a[i][j]);
		}
		printf("\n");
	}
}
