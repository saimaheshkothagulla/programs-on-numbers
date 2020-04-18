#include<stdio.h>
int main()
{
	int num,rem,sum=0,fact=1,i;
	printf("enter the number:");
	scanf("%d",num);
	int temp=num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		for(i=1;i<=rem;i++)
			fact=fact*i;
		sum+=fact;	
	}
	if(temp==sum)
	printf("%d is strong number.",temp);
	else
	printf("%d is not a strong number.",temp);
	return 0;
}
