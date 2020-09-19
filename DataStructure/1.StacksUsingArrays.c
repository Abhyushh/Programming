#include<stdio.h>
void push();
void pop();
void print();
int a[2];
int top=0;
int main()

{
	int ch;
	do{

	printf("1.push\n2.pop\n3.print\n");
	printf("Enter choice : ");
	scanf("%d", &ch);
	switch(ch){
		case 1:push();
		break;
		case 2:pop();
		break;
		case 3:print();
		break;

	}
}
	while(ch!=4);
	printf("error");
}


void push()
{
	if(a[top] == 4)
    {
        printf("Stack Overflow");
    }
	int n;
	printf("Enter element");
	scanf("%d",&n);
	a[top]=n;
	top++;
}
void pop()
{
	int temp;
	temp= a[top-1];
	top--;
	printf("%d", temp);
}
void print()
{
	for(int i=top;i>0;i--)
	printf("%d", a[i]);
}

