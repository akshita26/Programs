#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
}*start,*ptr,*temp,*newn,*temp1,*temp2,*pptr;
void main()
{
int val,choice,i,ch,value,pos;
start=NULL;
do{
	struct node *newc;
	printf("ENter the value of node:\n");
	scanf("%d", &val);
	newc=(struct node*)malloc(sizeof(struct node));
	if(start==NULL)
	{
		newc->data=val;
		newc->next=NULL;
		start=newc;
	}
	else
	{
		newc->data=val;
		newc->next=start;
		start=newc;
	}
	printf("Do you want to continue: 1. Yes 0. No\n");
	scanf("%d",&ch);
}while(ch==1);
temp=start;
printf("Created linked list is:\n");
while(temp!=NULL)
{
	printf("%d",temp->data);
	temp=temp->next;
}
printf("\nEnter your choice:\n1.Insertion\n2.Deletion\n3.Insertion at beginning\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("Enter the value of new node");
		scanf("%d",&value);
		printf("Enter position after which node is to be inserted");
		scanf("%d",&pos);
		newn=(struct node*)malloc(sizeof(struct node));
		ptr=start;
		for(i=1;i<pos;i++)
		{
			ptr=ptr->next;
		}
		temp1=ptr->next;
		newn->data=value;
		newn->next=temp1;
		ptr->next=newn;
		temp2=start;
		while(temp2!=NULL)
		{
			printf("%d",temp2->data);
			temp2=temp2->next;
		}
		break;
	case 2:
		printf("Enter the value whose node is to be deleted:\n");
		scanf("%d",&value);
		ptr=start;
		if(ptr->data==value)
		    start=start->next;
		else
		{
			while(ptr->data!=value)
			{
				pptr=ptr;
				ptr=ptr->next;
			}
			pptr->next=ptr->next;
		}
		temp2=start;
		printf("Updated linked list is:\n");
		while(temp2!=NULL)
		{
			printf("%d",temp2->data);
			temp2=temp2->next;
		}	
		break;	
	case 3:
		printf("Enter the value of new node");
		scanf("%d",&value);
		newn=(struct node*)malloc(sizeof(struct node));
		newn->data=value;
		newn->next=start;
		start=newn;
		temp2=start;
		printf("Updated linked list is:\n");
		while(temp2!=NULL)
		{
			printf("%d",temp2->data);
			temp2=temp2->next;
		}	
		break;
		
}
	
}
