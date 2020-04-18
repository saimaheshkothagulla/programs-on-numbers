#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter two numners of a GCD or HCF:");
	scanf("%d %d",&num1,&num2);
	while(num1!=num2)
	{
	 if(num1>num2)
	 {
	 num1=num1-num2;
		}
	else
	{
		num2=num2-num1;
	}
}
	printf("GCD of two numbers is:%d",num2);
	
return 0;
}

