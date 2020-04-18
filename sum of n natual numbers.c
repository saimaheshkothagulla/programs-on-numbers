//write a c program to print sum of n natural numbers.
#include<stdio.h>
int main()
{
	int a[50],sum=0,i,n;
	printf("enter no.of natural numbers in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum+=i;
	}
	printf("sum of %d elements are %d",n,sum);
	return 0;

}
