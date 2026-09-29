#include<stdio.h>
int main()
{
	int a,b;
	printf("=== Swap using bitwise XOR===\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("\n Before Swapping:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n After Swapping:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}