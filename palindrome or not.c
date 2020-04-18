//write a c program that pcheck wheather the given number is palindrome or not.... 
#include<stdio.h>
int main()
{
	int num,reverse=0,temp;
	printf("Enter number:");
	scanf("%d",&num);
    int num1=num;
	while(num>0)// we can use also "num!=0" in while loop
	{
		temp=num%10;
		reverse=reverse*10+temp;
		num=num/10;
	}
	if(reverse==num1)
	printf("the given number %d is palindrome number.");
	else
	printf("the given number %d is not a palindrome number.");
	return 0;
}
