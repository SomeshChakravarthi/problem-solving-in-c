#include<stdio.h>
int main()
{
	int units;
	float bill;
	printf("==Electricity Bill==\n");
	printf("Enter the units consumed:");
	scanf("%d",&units);
	if(units<=100)
	{
		bill=units*1.50;
	}
	else if(units<=200)
	{
		bill=100*1.50+(units-100)*2.00;
	}
	else if(units<=500)
	{
		bill=100*1.50+100*2.00+(units-200)*3.00;
	}
	else
	{
		bill=100*1.50+100*2.00+300*3.00+(units-500)*5.00;
	}
	printf("Electricity Bill=Rs.%2f",bill);
	return 0;
}