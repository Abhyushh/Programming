#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head = NULL;
void INSERT(int num)
{
	struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=num;
        temp->next=NULL;
        if(head==NULL)
        {
                head=temp;
        }
        else
        {
                ptr=head;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}

void insert_at_beginning(int data)
{

    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

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
    }
    temp->next = newnode;
}

void insert_n_pos(int data)
{
    struct node *newnode, *ptr;
    int pos;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    printf("Enter position of node");
    scanf("%d", &pos);
    if(pos == 0)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        ptr = head;

    }

}

void PRINT()
{
	struct node* temp = head;
	printf("The list is:\n ");
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
	printf("\nEnter data to insert at beginning of the list: ");
    scanf("%d", &data);
    insert_at_beginning(data);
    PRINT();

    printf("\nEnter data to insert at end of the list: ");
    scanf("%d", &data);
    insert_at_end(data);
    PRINT();
}
