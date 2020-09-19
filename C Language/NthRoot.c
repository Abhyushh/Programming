 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int a;
 	float n;
 	printf("Enter a number");
 	scanf("%d",&a);
 	printf("Konsa root chahiye?");
 	scanf("%f",&n);
 	float x=(1/n);
  	printf("Final answer is %f",pow(a,x));
 	return 0;
 	
 }
