//write a C program that checks wheather the given number is abundant number or not..
#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("enter number:");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
			sum=sum+i;
	}
	if(sum>num)
	printf("%d is a abundant number.",num);
	else
	printf("%d is not a abundant number.",num);
	
	return 0;
}
