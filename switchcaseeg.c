#include<stdio.h>
int main()
{
	int no;
	printf("Enter a number for a food item:");
	scanf("%d",&no);
	switch(no)
	{
		case 1: printf("Food item - Pasta\nPrice - Rs 179/-");
		break;
		case 2: printf("Food item - Noodles\nPrice - Rs 189/-");
		break;
		case 3: printf("Food item - French Fries\nPrice - Rs 99/-");
		break;
		case 4: printf("Food item - Burger\nPrice - Rs 239/-");
		break;
		case 5: printf("Food item - Pizza\nPrice - Rs 249/-");
		break;
		default: printf("Please select a number between 1 and 5 ");
	}
	return 0;
}
