int main(void)
{
	int x = 10;
	int y = 20;

	const int*  p = &x; //p is a pointer to const int
	//p is low level const
	//p is left const

	p = &y;  //valid
	//*p = 56;  //invalid;
}
