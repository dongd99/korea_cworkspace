#include <stdio.h>

int main() {

	char msg[] = "Good Luck";
	//문자열은 항상 널문자가 끝에 있기 때문에 문자열 + 1을 해줘야함
	char* p = msg;

	printf("%dbyte, %dbyte\n", sizeof(msg), sizeof(p));
	printf("%s\n", msg);
	printf("%s\n", p);
	printf("%s\n", (p+1));
	printf("%s\n", (p+2));
	printf("%s\n", (p+3));


	int size = sizeof(msg) / sizeof(msg[0]);
	for (int i = 0; i < size; i++) {
		printf("%c\n", *(p + i));
	}


	




	return 0;
}
