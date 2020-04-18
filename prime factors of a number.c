//write a c program to print all prime factors of a number..
#include<stdio.h>
int main()
{
	int num,i,j;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		int c=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				c=1;
				break;
			}
			
		}
		if(c==0)
		{
		if(num%i==0)
		printf("%d ",i);
		}
	}
	return 0;



}
