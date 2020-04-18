#include<stdio.h>
int main()
{
	int num1,num2,i,sum1=0,sum2=0;
	printf("enter number1:");
	scanf("%d",&num1);
	printf("enter number2:");
	scanf("%d",&num2);
	for(i=1;i<=num1/2 ||i<=num2/2;i++)
	{
		if(num1%i==0)
			sum1=sum1+i;
		if(num2%i==0)
			sum2=sum2+i;
	}
	if((double)sum1/num1==(double)sum2/num2)
	printf("(%d ,%d) is friendly pairs",num1,num2);
	else
	printf("(%d ,%d) is friendly pairs",num1,num2);
	return 0;
}
