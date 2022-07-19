#include <stdio.h>
#include "nutility.h"

#define			SIZE		40

int main(void)
{
	int a[SIZE];

	randomize();

	set_array_random(a, SIZE);
	print_array(a, SIZE);

	for (int i = 0; i < SIZE - 1; ++i) {
		for (int k = 0; k < SIZE - 1 - i; ++k) {
			if (a[k] > a[k + 1]) {
				int temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
		print_array(a, SIZE);
		(void)getchar();
	}
}
