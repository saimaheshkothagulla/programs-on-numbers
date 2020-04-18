//write a c program to print no.of digits of a given number
#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter number:");
	scanf("%d",&num);
	while(num>0)// we can use also "num!=0" in while loop
	{
		num=num/10;
		count++;
	}
	printf("no of digits of a given number are %d",count);
	return 0;
}
