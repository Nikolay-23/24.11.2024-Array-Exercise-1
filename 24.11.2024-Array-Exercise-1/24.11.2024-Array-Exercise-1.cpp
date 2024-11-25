
#include <iostream>
#include <stdlib.h>

int main()
{
	int arr[50];
	int min = 0;
	int max = 50;

	for (int i = 0; i < 50; i++)
	{
		int random = rand() % (max - min + 1) + min;

		printf("All arr[%d] random numbers - %d\n", i,random);
	}
}

