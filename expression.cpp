#include<stdio.h>
int main()
{
	int m1,m2,m3,tot,choice;
	float avg;
	printf("===Student Result Calculation===\n");
	printf("Enter marks in subject 1:");
	scanf("%d",&m1);
	printf("Enter marks in subject 2:");
	scanf("%d",&m2);
	printf("Enter marks in subject 3:");
	scanf("%d",&m3);
	tot=m1+m2+m3;
	avg=tot/3.0;
	printf("\n total marks =%d",tot);
	printf("\n avg =%2f",avg);
	if(m1>=40 && m2>=40 && m3 >=40)
	{
		printf("\nResult =Pass");
		if(avg>=90)
		  choice=1;
		else if(avg>=80)
		  choice=2;
		else if (avg>=70)
		  choice=3;
		else if (avg>=60)
		  choice=5;
		switch (choice)
		{
			case 1:
				printf("\nGrade=A+");
				break;
			case 2:
				printf("\nGrade=A");
				break;
			case 3:
				printf("\nGrade=B");
				break;
			case 4:
				printf("\nGrade=C");
				break;
			case 5:
				printf("\nGrade=D");
				break;		
		}
	}
		else
		    {
		    	printf("\nResult=Fail");
		    	printf("\nGrade=F");
			}
			return 0;
		} .
		 
		 
		 
		 
		 
		 
		 
		 
		   