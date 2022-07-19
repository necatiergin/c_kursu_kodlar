#include <stdio.h>

int main(void)
{
	int x = 10;

	*&x = 99;
	printf("x = %d\n", x);
	
	++*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&x;
	//++x

	printf("x = %d\n", x);

}
