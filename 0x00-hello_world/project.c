#include<stdio.h>
/**fuction declaration this fuction is for summing up two numbers*/

void sum(void)
{
	int a, b, sum ;
	printf("enter two numbers\n");
	scanf("%d%d\n", &a, &b);
	sum = a + b;
	printf("The sum of %d and %d is %d.\n", a, b, sum);
}

/**
*main - function initialization
*
*Return: value zero (success)
*/

int main(void)
{
	sum();
	printf("My first program in c language.\n This is actually cool.\n");
	return 0;
}
