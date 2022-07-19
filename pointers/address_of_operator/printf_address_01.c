#include <stdio.h>

int main(void)
{
	int x = 10;
	int* ip = &x;

	printf("&x      = %p\n", &x);
	printf("ip      = %p\n", ip);
	printf("&ip     = %p\n", &ip);
}
