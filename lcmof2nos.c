#include<stdio.h>
int lcmofnum(int,int);
int main()
{
	int n1,n2,lcm;
	printf("Input first number:");
	scanf("%d",&n1);
	printf("\nInput second number:");
	scanf("%d",&n2);
	lcm=lcmofnum(n1,n2);
	printf("\nLCM of %d and %d is %d",n1,n2,lcm);
}

int lcmofnum(int a,int b)
{
	static int i=1;
	if(i%a==0 && i%b==0)
	{
		return i;
	}
	else
	{
		i++;
		lcmofnum(a,b);
		return i;
	}
}
