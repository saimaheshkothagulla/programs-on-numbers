//write a c program that print factorial of a given number.....
#include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("enter the number:");
	scanf("%d",&num);
	if(num==0)                  //0!=1
		printf("factorial of %d is %d",num,1);
	else
	{
	for(i=num;i>0;i--)
		fact=fact*i;
	
	printf("factorial of %d is %d",num,fact);
	}
	return 0;
}
