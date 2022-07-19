#include <stdio.h>

int main(void)
{
	char str[100] = "nurullah";

	int i = 0;

	while (str[i])
		putchar(str[i++]);
}
