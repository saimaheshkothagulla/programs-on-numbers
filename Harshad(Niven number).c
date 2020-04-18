//write a c program that checks wheather the number is Harshad number(niven number) or not..
#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("enter the number:");
	scanf("%d",&num);
	int temp=num;
	while(num!=0)
	{
		rem=num%10;
		sum+=rem;
		num/=10;	
	}
	if(temp%sum==0)
	printf("%d is a Harshad number.",temp);
	else
	printf("%d is not a Harshad or Niven number.",temp);
	return 0;
}
