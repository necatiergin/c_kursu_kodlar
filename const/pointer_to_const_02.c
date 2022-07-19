
int main(void)
{
	int a[] = { 1, 2, 4, 7, 9 };
	const int* p = a;

	++* p; //invalid
	++p; //invalid
}
