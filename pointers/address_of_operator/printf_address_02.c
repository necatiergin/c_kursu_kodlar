#include <stdio.h>

int main(void)
{
	int a[] = { 1, 2, 3, 4, 5, };
	int* ptr = a;

	printf("&a[0] = %p\n", &a[0]);
	printf("&a[0] = %p\n", a);
	printf("ptr   = %p\n", ptr);
}
