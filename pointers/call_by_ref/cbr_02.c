#include <stdio.h>

void scan_int(int* ptr)
{
	int ch;
	*ptr = 0;

	while ((ch = getchar()) != '\n') {
		*ptr = *ptr * 10 + ch - '0';
	}
}


int main(void)
{
	int x;

	printf("bir sayi giriniz: ");
	scan_int(&x);

	printf("x = %d\n", x);
}
