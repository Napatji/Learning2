#include<stdio.h>
int main()
{
	int star;
	scanf_s("%d",  &star);
	for (int level = 0; level < star; level++)
	{
		for (int column = 0; column < level+1; column++)
		{
			printf("*");
		}
		printf("\n");
	}
}