//write a c program that prints reverse of a given number..
#include<stdio.h>
int main()
{
	int num,reverse=0,temp;
	printf("Enter number:");
	scanf("%d",&num);
	while(num>0)// we can use also "num!=0" in while loop
	{
		temp=num%10;
		reverse=reverse*10+temp;
		num=num/10;
	}
	printf("the reverse of a given number is %d",reverse);
	return 0;
}
