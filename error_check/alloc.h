#ifndef _ALLOC_H
#define _ALLOC_H
#define MALLOC(num,type) (type *)alloc((num) * sizeof(type))

void* alloc(size_t size);




#endif
