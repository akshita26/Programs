#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	char *b,a[10];
	b=(char*)malloc(n+1);
	printf("Enter the string:\n");
	gets(a);
	printf("Enter number of characters to be extracted:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%c", b[i]);
	}
	
}
