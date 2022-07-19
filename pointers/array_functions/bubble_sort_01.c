#include <stdio.h>
#include "nutility.h"

#define			SIZE		10

//function should better return the address it receives
void bubble_sort(int* pa, int size)
{
	for (int i = 0; i < size - 1; ++i) {
		for (int k = 0; k < size - 1 - i; ++k) {
			if (pa[k] > pa[k + 1]) {
				swap(pa + k, pa + k + 1);
			}
		}
	}
}


int main(void)
{
	int a[SIZE];

	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);
	bubble_sort(a, SIZE);
	print_array(a, SIZE);
}
