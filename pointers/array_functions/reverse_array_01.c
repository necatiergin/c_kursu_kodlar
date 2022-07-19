#include <stdio.h>
#include "nutility.h"

#define			SIZE		10

//function should better return the address it receives
void reverse_array(int* pa, int size)
{
	for (int i = 0; i < size / 2; ++i) {
		swap(pa + i, pa + size - 1 - i);
	}
}


int main(void)
{
	int a[SIZE];

	randomize();
	set_array_random(a, SIZE);
	print_array(a, SIZE);
	reverse_array(a, SIZE);
	print_array(a, SIZE);

}
