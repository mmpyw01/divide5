#include<stdio.h>
int main()
{
	int i, j, count=0;

	printf("Enter first number : ");
	scanf("%d", &i);
	printf("Enter last number : ");
	scanf("%d", &j);

	for (i = i; i <= j; i++)
	{
		if ((i % 5) == 0)
		{
			printf("%d ", i);
			count++ ;
		}
	}
	printf("\n");
	printf("Result : %d", count);

	return 0;
}