#include <stdio.h>

int main(void)
{
	char name[40];

	printf("bir isim girin: ");
	(void)scanf("%s", name);
	printf("isim = (%s)\n", name);
}
