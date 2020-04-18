//write a C program to print GCD or HCF of two numbers using recursion method..
#include<stdio.h>
int gcd(int,int);
int main()
{

int num1,num2,result;
printf("enter two numners of a GCD or HCF:");
scanf("%d %d",&num1,&num2);
result=gcd(num1,num2);
printf("gcd of two numbers is %d",gcd(num1,num2));
return 0;
}
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
