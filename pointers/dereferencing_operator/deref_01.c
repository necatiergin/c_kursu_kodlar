//içerik (dereferencing) operatörünün operandı adres olmak zorunda

int main(void)
{
	int x = 10;

	*x; //gecersiz x ifadesi adres degil
	*12; //gecersiz 12 ifadesi adres degil
}
