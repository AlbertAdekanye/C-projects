#include<stdio.h>
#include<stdlib.h>

int main()
{
	float pi;
	float area;
	int radius;
	
	printf("Enter pi: ");
	scanf("%f", &pi);
	
	printf("Enter radius: ");
	scanf("%d", &radius);
	
	area = pi * radius * radius;
	
	printf("Area of cicle is %f cm square", area);
	
	return 0;
}
