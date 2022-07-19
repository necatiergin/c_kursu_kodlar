#include <stdio.h>
#include "nutility.h"

#define			SIZE		10

int get_array_min(const int* pa, int size)
{
	int min = *pa;

	for (int i = 1; i < size; ++i) {
		if (pa[i] < min)
			min = pa[i];
	}

	return min;
}


int main(void)
{
	int a[SIZE];
	int min, max;

	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);

	printf("min = %d\n", get_array_min(a, SIZE));

}
