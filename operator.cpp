#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("====operators and expressions===\n");
	printf("Enter the first number:"); 
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("\n__MENU__\n");
	printf("1.Addition\n");
	printf("2.Subraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Modulus\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=a+b;
			printf("Result=%d",res);
			break;
		case 2:
			res=a-b;
			printf("Result=%d",res);
			break;
		case 3:
			res=a*b;
			printf("Result=%d",res);
			break;
		case 4:
			if(b!=0)
			{
				res=a/b;
				printf("Division by zero is not possible.");
			}
			else
			{
				printf("Division by zero is not possible.");
			break;
			}
		case 5:
			if(b!=0)
			{
				res=a%b;
				printf("Result=%d",res);
			}
			else
			{
				printf("modulus by zero is not possible.");
			}
			break;
		default:
			printf("Invalid choice.");
		}
		return 0;
	}

	