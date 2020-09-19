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
void PRINT()
{
	struct node* temp = head;
	printf("The list is: ");
	while(temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main()
{
	head = NULL;
	int n, num;
	printf("How many numbers?");
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		printf("Enter the number");
		scanf("%d", &num);
		INSERT(num);
		PRINT();
	}
}
