/*
//write a C program that checks wheather the given number is perfect number or not..
 //if num=6,factors of num=6 is 1,2,3,
//so,sum of it factors and num is same
//thats why num=6 is perfect number....
*/
#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("enter number:");
	scanf("%d",num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
			sum+=i;
	}
	if(sum==num)
	printf("%d is a perfect number.",num);
	else
	printf("%d is not a perfect number.",num);
	
	return 0;
}
