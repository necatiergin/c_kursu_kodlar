#include <stdio.h>

int main()
{
	int x = 1;

	while (x) {
		bprint(x);
		x <<= 1;
	}
}
