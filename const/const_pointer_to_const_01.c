int main(void)
{
	int x = 10;
	int y = 20;

	const int*  const p = &x; //p is a const pointer to const int
	//p is low level & top level const
	//p is left-right const

	//p = &y;  //invalid
	//*p = 56;  //invalid;
}
