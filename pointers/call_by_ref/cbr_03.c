#include <stdio.h>

void wrong_swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	int x = 10, y = 45;

	wrong_swap(x, y);

	printf("x = %d   y = %d\n", x, y);
}
