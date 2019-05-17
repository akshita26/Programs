#include<stdio.h>
int main()
{
	int a[10][10],i,j,flag=0;
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
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	if(i>j && a[i][j]!=0)
	flag=0;

	if(flag==0)
	printf("Lower");
	return 0;
}
