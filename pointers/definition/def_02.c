/*
   Virgüllerle ayrılmış (comma separated) bildirimlerde asterisk atomu yalnızca önüne geldiği ismi niteliyor.
*/

void f1(void)
{
	int* p1, p2, p3;
	//int* p1;
	//int p2;
	// int p3;
  ///...

}


void f2(void)
{
	int* p1, *p2, *p3;
	// int* p1;
	// int* p2;
	// int* p3;
  ///...

}
