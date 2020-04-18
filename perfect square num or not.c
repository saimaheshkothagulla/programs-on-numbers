//write a C Program that print that check wheather the number is perfect square root number or not....
#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	double sq_root=sqrt(num);
	if(sq_root-floor(sq_root)==0)
	printf("%d is a perfect square.",num);
	else
	printf("%d is not a perfect square.",num);
	return 0;
}
