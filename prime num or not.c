//write a c program that check wheather the prime number or not...
#include<stdio.h>
int main()
{
	int num,c=0,i;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==0)
	printf("%d is a prime number.",num);
	else
	printf("%d is a not prime number.",num);
	return 0;
}
