//write a c program that LCM of two numbers....
#include<stdio.h>
int main()
{
	int num1,num2,lcm;
	printf("enter two numners of a LCM:");
	scanf("%d %d",&num1,&num2);
	lcm=num1*num2;
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
printf("lcm of two numbers is %d",lcm/num2);
return 0;
}

