int main(void)
{
	int a[] = { 1, 2, 4, 7, 9 };
	int* const p = a;

	++* p; //ok
	++p; //invalid
}
