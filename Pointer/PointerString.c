#include <stdio.h>

int main() {

	char msg[] = "Good Luck";
	//���ڿ��� �׻� �ι��ڰ� ���� �ֱ� ������ ���ڿ� + 1�� �������
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
