#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],sum=0;
	int m,n,p,q,c,d,k;
	printf("Enter no of rows and coulmns of 1st matrix");
	scanf("%d%d",&m,&n);
	for(c=0;c<m;c++)
	{
		for(d=0;d<n;d++);
		{
		scanf("%d",&a[c][d]);
	        }
	}
	printf("no of rows and column of 2nd matrix");
	scanf("%d %d",&p,&q);

printf("Enter elemnts of 2nd");
	for(c=0;c<p;c++)
	{
		for(d=0;d<q;d++);
		
		scanf("%d",&b[p][q]);
	}
	for(c=0;c<m;c++)
	for(d=0;c<q;d++)
	for(k=0;k<p;k++)
	{
		sum=sum+a[c][k]*b[k][d];
	}
	mul[c][d]=sum;
	for(c=0;c<m;c++)
	{
		for(d=0;d<q;d++)
		{
			printf("%d",mul[c][d]);
		}
		printf("\n");
	}
	
	return 0;
}
