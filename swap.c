#include<stdio.h>
int main()
{
	 int a,b;
	printf("Enter 2 nos: ");
	scanf("%d%d",&a,&b);
	printf("Before swapping:\n");
	printf("a=%d\tb=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping:\n");
	printf("a=%d\tb=%d",a,b);
	return 0;
}
