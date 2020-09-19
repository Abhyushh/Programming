#include<stdio.h>
#include<stdlib.h>
struct student 
{
    int roll;
    char name[50];
};
int main() 
{
	struct student *s1;
	
    s1 = (struct student*)malloc(sizeof(student));
	if(s1!=NULL){
	scanf("%d%s", s1->roll, s1->name);
	printf("%d\n%s", s1->roll, s1->name);
	free(s1);
	s1 = (struct student*)malloc(sizeof(student));
	printf("\n%d\n%s", s1->roll, s1->name);
}
return 0;
}
