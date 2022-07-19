#define			SIZE		100

int main(void)
{
	char str[SIZE];

	printf("bir yazi girin: ");
	gets_s(str, SIZE);

	//yaziyi ters ceviriyoruz (reverse)
	printf("[%s]\n", str);

	int len;
	for (len = 0; str[len] != '\0'; ++len)
		; //null statement

	for (int i = 0; i < len / 2; ++i) {
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}

	printf("[%s]\n", str);
}
