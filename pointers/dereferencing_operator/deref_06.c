#include <stdio.h>


int main(void)
{
	int x = 89;
	int* ptr = &x;

	*ptr = 77;

	printf("x = %d\n", x);
}
