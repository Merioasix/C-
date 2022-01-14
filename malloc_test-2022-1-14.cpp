#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi = NULL;
	int i = 0;
	pi = (int*)malloc(25 * sizeof(int));

	printf("%d", &pi);
	for (i = 0;i < 25;i++)
	{
		*pi++ = 0;
	}


	system("pause");
	return EXIT_SUCCESS;
}
