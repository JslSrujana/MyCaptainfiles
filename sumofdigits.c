#include<stdio.h>
int addingdigits(int);
int main()
{
	int n;
	printf("Input number:");
	scanf("%d",&n);
	addingdigits(n);
	return 0;
}

int addingdigits(int n)
{
	int sum,rem;
	while(n!=0)
	{
	rem=n%10;
	sum=sum+rem;
	n/=10;
}
printf("Sum of digits: %d",sum);
}
