#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[50],i,ch,pos,e,max;
	printf("Enter size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter your choice: 1.Insertion 2.Deletion 3.Find Max");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter element to be inserted:\n");
			scanf("%d",&e);
			printf("Enter position\n");
			scanf("%d",&pos);
			for(i=n-1;i>=pos;i--)
			{
				a[i+1]=a[i];
			}
			a[pos]=e;
			n=n+1;
			printf("Modified array is :\n");
			for(i=0;i<n;i++)
			{
				printf("%d ",a[i]);
			}
			break;
		case 2:
		  printf("Enter element to be deleted:\n");
			scanf("%d",&e);
			for(i=0;i<n;i++)
			{
				if(a[i]==e)
				{
					pos=i;
					break;
				}
			}
			for(i=pos;i<=n;i++)
			{
				a[i]=a[i+1];
			}
				n=n-1;
				printf("Modified array is :\n");
			for(i=0;i<n;i++)
			{
				printf("%d ",a[i]);
			}  break;
        case 3:
            max=a[0];
            for(i=1;i<n;i++)
            {
                if(a[i]>a[0])
                {
                    max=a[i];
                }
            }
            printf("\n Greatest Array element is= %d",max);
            break;
	}
}
