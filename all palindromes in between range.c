//write a c program that print the all the palindrome numbers in between the given ranges
//[range1,range2]
#include<stdio.h>
int main()
{
	int range1,range2,temp,num,i;
	printf("Enter the range1:");
	scanf("%d",&range1);
	printf("Enter the range2:");
	scanf("%d",&range2);
	for(i=range1;i<=range2;i++)
	{
	num=i;
	int reverse=0;
	while(num>0)// we can use also "num!=0" in while loop
	{
		
		temp=num%10;
		reverse=reverse*10+temp;
		num=num/10;
	}
	if(reverse==i)
		printf("%d ",i);
	}
	return 0;
}


