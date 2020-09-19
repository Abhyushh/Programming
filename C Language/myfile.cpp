#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void INSERT(int num)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = head;
	head = temp;
}

//void insert_at_beginning(int data)
//{
//
//    struct node *newnode;
//    newnode = (struct node*)malloc(sizeof(struct node));
//    newnode->data = data;
//    newnode->next = head;
//    head = newnode;
//}

void insert_at_end(int data)
{
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
        temp->next = newnode;
    }
}
void PRINT()
{
	struct node* temp = head;
	
	printf("The list is:\n ");
	int count = 0;
	while(temp != NULL)
	{
		printf("%d\t", temp->data);

		temp = temp->next;
	}
	printf("\n");
}
void COUNT()
{
    struct node* temp = head;
	int count = 0;
	while(temp != NULL)
	{
		temp = temp->next;
        count++;
	}
printf("total nodes = %d\n", count);
}

int main()
{
	head = NULL;
	int n, num, data;
	printf("How many numbers?");
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		printf("Enter the number");
		scanf("%d", &num);
		INSERT(num);
		PRINT();
		COUNT();

	}
//	printf("\nEnter data to insert at beginning of the list: ");
//    scanf("%d", &data);
//    insert_at_beginning(data);
//    PRINT();

    printf("\nEnter data to insert at end of the list: ");
    scanf("%d", &data);
    insert_at_end(data);
    PRINT();
}
