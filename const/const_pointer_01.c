int main(void)
{
	int x = 10;
	int y = 20;

	int* const p = &x; //p is a const pointer to int
	*p = 56;  //valid;
	//p = &y;  //invalid
}
