//write a C program that checks wheather the num is Armstrong num or not...
#include<stdio.h>
#include<math.h>
int main()
{
	int num,no_of_digits=0,temp,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	int num1=num;
	int n=num;
	while(num!=0)
	{
		num=num/10;
		no_of_digits++;
	}
	//printf("%d",no_of_digits);
	while(num1!=0)
	{
		temp=num1%10;
		sum+=pow(temp,no_of_digits);
		num1=num1/10;
		
	}
	if(n==sum)
	printf("%d is Armstrong number.",n);
	else
	printf("%d is not an Armstrong number.",n);
}
