int main(void)
{
	int x = 10;
	int y = 20;

	int* const p = &x; //p is a const pointer to int
	//p is top level const
	//p is right const

	*p = 56;  //valid;
	//p = &y;  //invalid
}
