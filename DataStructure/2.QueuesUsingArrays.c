#include<stdio.h>
#define MAX_SIZE 101
void enqueue();
void dequeue();
void print();
int a[MAX_SIZE];
int top = -1;
int rear = -1;
int main()
{
    int ch;
	do{

	printf("1.enqueue\n2.dequeue\n3.print\n");
	printf("Enter choice : ");
	scanf("%d", &ch);
	switch(ch){
		case 1:enqueue();
		break;
		case 2:dequeue();
		break;
		case 3:print();
		break;

	}
}
	while(ch!=4);
	printf("error");
}
void enqueue()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
        if(rear ==  -1 && top == -1)
        {
        rear = 0;
        top = 0;
        a[rear] = n;
        }
            else
            {
            rear = (rear + 1);
            a[rear] = n;
            }
}

void dequeue()
{
    if(top == rear)
    {
        printf("%d", a[top]);
        top = -1;
        rear = -1;
    }
    else
    {
        printf("%d", a[top]);
        top = top+1;
    }
}
void print()
{
    for(int i=top; i<=rear; i++)
    {

        printf("%d", a[i]);
    }
}

