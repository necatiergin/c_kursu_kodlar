#include <stdio.h>
#include "nutility.h"

#define			SIZE		20

int get_array_max(const int* pa, int size)
{
	int max = *pa;

	for (int i = 1; i < size; ++i) {
		if (pa[i] > max)
			max = pa[i];
	}

	return max;
}


int main(void)
{
	int a[SIZE];
	int min, max;

	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);

	printf("max = %d\n", get_array_max(a, SIZE));

}
