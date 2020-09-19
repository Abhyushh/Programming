#include<stdio.h>
#include<math.h>
int main()
{
	int d,b,a,c;
	printf("Enter value of a");
	scanf("%d",&a);
	printf("Enter value of b");
	scanf("%d",&b);
	printf("Enter value of c");
	scanf("%d",&c);
	float x1,x2;
	d= ((b*b)-4*a*c);
	x1= (-b+pow(d,(1/2)))/(2*a);
	x2= (-b-pow(d,(1/2)))/(2*a);
	printf("Roots of equation are %f %f",x1,x2);
return 0;
}
