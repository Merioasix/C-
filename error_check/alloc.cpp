#include "alloc.h"
#include <stdio.h>
#include <stdlib.h>
#undef   malloc

void *alloc(size_t size)
{
	void* new_mem;
	/*����������ڴ棬�����ȷʵ����ɹ�*/
	new_mem = malloc(size);
	if (new_mem == NULL)
	{
		printf("Out of memory!\n");
		exit(1);
	}
	return new_mem;

}

