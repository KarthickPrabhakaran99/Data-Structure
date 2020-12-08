#include<stdio.h>
#include<stdlib.h>

#define size 7

struct node{
	int data;
	struct node *next;
} *chain[size];

int hash(int num,int size)
{
	struct node *temp,*head;
	int index=num%size;
	if(chain[index]==NULL)
	{
		head=(struct node *)malloc(sizeof(struct node));
		head->data=num;
		head->next=NULL;
		chain[index]=head;
	}
	else if(chain[index]!=NULL)
	{
		while(temp->next)
		{
			temp=temp->next;
		}
		
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=num;
		temp->next=NULL;
		head->next=temp;
	}
	return index;
}
void display(int index)
{
	while(chain[index]!=NULL)
	{
		printf("%d",chain[index]->data);
		chain[index]=chain[index]->next;
	}
}

int main()
{
	int num;
	
	for(int i=0;i<size;i++)
	{
		chain[size]=NULL;
	}
	
	printf("%d",hash(num,size));
	display(hash(num,size));
	return 0;
}
