#include<stdio.h>
int main()
{
	int n, i, d,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	/*Multiplication Table*/
	printf("\n Multiplication table of %d:\n",n);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d=%d\n",n,i,n*i);
	}

	/*Reverse the number */
	i=n;
	while (i!=0)
	{
		d=i%10;
		rev=rev*10+d;
		i=i/10;
	
	}
	printf("\nReverse of %d=%d",n,rev);
	return 0;
}