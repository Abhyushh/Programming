#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int item;
    struct queue *next;
}*front, *rear, *p;
typedef struct queue node;
void push();
void pop();
void print();
void main()
{
    int x;
    do{
    printf("1.Push\n2. Pop\n3. Print\n4. evenodd\n");
    scanf("%d", &x);
    switch(x)
    {
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: print();
        break;
        case 4: evenodd();
        break;
    }
    }while(x>0 &&x<4);

}
void push()
{
    if(front == NULL)
    {
       p = (node *)malloc(sizeof(node)) ;
       printf("Enter Element\n");
       scanf("%d", &p->item);
       front=p;
       rear = p;
       p->next = NULL;
    }
    else
    {
        p = (node *)malloc(sizeof(node)) ;
       printf("Enter Element\n");
       scanf("%d", &p->item);
       rear->next = p;
       rear = p;
       p->next = NULL;
    }
}
void pop()
{
    p = front;
    if(front == NULL && rear == NULL)
    printf("Empty Queue\n");
    else if(front == rear)
    {
        front = NULL;
        rear = NULL;
        free(p);
    }
    else
    {
        p = front;
        front = front->next;
        free(p);
    }
}
void print()
{
    for(p = front; p!=NULL; p=p->next)
        printf("%d\t", p->item);
    printf("\n");
}
void evenodd(struct Node* temp)
{
    int odd=0;
    int even=0;
    int i=1;
    p=front;
    while(p != NULL) {
        if (i % 2 == 0)
            even += p->item;
        else
            odd += p->item;
        p = p->next;
        i++;
    }

    printf("Even Sum =%d", even);
    printf("odd sum = %d", odd);
}
