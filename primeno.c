#include<stdio.h>
int checkprime(int,int);
int main()
{
	int n,check;
	printf("Enter a number:");
	scanf("%d",&n);
	check=checkprime(n,n/2);
	if(check==1)
	{
		printf("%d is a prime nummber",n);
	}
	else
	printf("%d is not a prime number",n);
}

int checkprime(int n,int i)
{
	if(i==1)
	return 1;
	else
	{
	if(n%i==0)
	return 0;
	else
	return checkprime(n,i-1);
}
}
