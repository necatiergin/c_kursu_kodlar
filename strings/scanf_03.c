#include <stdio.h>

#define SIZE   40

int main(void)
{
	char name[SIZE];
	char surname[SIZE];
	char town[SIZE];
	int age;

	printf("isim soyisim sehir ve yas giriniz: ");
	(void)scanf("%s%s%s%d", name, surname, town, &age);
	printf("%d yasindaki %s ilinde mukim %s %s\n", age, town, name, surname);
}
