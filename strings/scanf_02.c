#include <stdio.h>

int main(void)
{
	char name[40];

	printf("bir isim girin: ");
	scanf("%s", name);
	//scanf("%s", &name[0]);
	printf("isim = (%s)\n", name);
}
