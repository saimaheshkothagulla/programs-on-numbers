//write a program that print sum of n elements in a array. 
#include<stdio.h>
int main()
{
	int a[50],sum=0,i,j,n;
	printf("enter no.of elements in array:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("sum of %d elements are %d",n,sum);
	return 0;

}
