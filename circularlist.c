#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define true 1
#define false 0



struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *current = NULL;
struct node *newnode = NULL;
struct node *temp = NULL;
struct node *prev = NULL;
struct node *next = NULL;

void move(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		head = head->next;
		tail = tail->next;
	}
}

void insert(int data)
{
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;
		tail = newnode;
		tail->next = head;
	}
	else
	{
		tail->next = newnode;
		tail = newnode;
		tail->next = head;
	}
}


int search(int data)
{
	struct node *temp = head;
	while(temp->next != head)
	{
	if(temp->data == data)
	{
	    return true;
	}
	temp = temp->next;
	}
	return false;
}
int delete(int data)
{
	struct node *temp = head;
	while(temp->next != head)
	{
	if(temp->data == data)
	{
	    prev->next = temp->next;
	    free(temp);
	    return true;
	}
	prev = temp;
	temp = temp->next;
	}
	return false;
}
int deleteat(int pos)
{
	struct node *temp = head;
	int i = 0;
	while(temp->next != head)
	{
	if(i == pos)
	{
	    prev->next = temp->next;
	    free(temp);
	    return true;
	}
	prev = temp;
	temp = temp->next;
	i++;
	}
	return false;
}
int isFull()
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	if(temp == NULL)
	{
	    return true;
	}
	else
	{
	    free(temp);
	    return false;
	}
}
int length()
{
	struct node *temp = head;
	int i = 0;
	while(temp->next != head)
	{
	i++;
	temp = temp->next;
	}
	return i;
}

void display()
{
    struct node *temp = head;
    while(temp->next != head)
    {
		printf("%d ",temp->data);
		temp = temp->next;
    }
	printf("%d ",temp->data);
}


int main()
{
	int choice;
	int data;
	int pos;
	while(1)
	{
		printf(" 1. Insert \t 2. Search \t 3. Delete \t 4. Delete at \t 5. Length \t 6. Display \t 7. Exit \t Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the data: ");
				scanf("%d",&data);
				insert(data);
				break;
			case 2:
				printf("Enter the data: ");
				scanf("%d",&data);
				if(search(data))
				{
					printf("Data found \n");
				}
				else
				{
					printf("Data not found \n");
				}
				break;
			case 3:
				printf("Enter the data: ");
				scanf("%d",&data);
				if(delete(data))
				{
					printf("Data deleted \n");
				}
				else
				{
					printf("Data not found \n");
				}
				break;
			case 4:
				printf("Enter the position: ");
				scanf("%d",&pos);
				if(deleteat(pos))
				{
					printf("Data deleted \n");
				}
				else
				{
					printf("Data not found \n");
				}
				break;
			case 5:
				printf("Length of the list is %d \n",length());
				break;
			case 6:
				display();
				printf("\n");
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("Invalid choice \n");
				break;
		}
	}
	return 0;
}

