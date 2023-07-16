#include <stdio.h>

int main()
{
	int i;

	printf("Not hello world...\n");

	for (i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i * i);
	}

	return 0;
}
