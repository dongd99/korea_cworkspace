#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	
//strcpy(), strlen(), strcmp()
//���ڿ�����, ���ڿ�����, ���ڿ���

int main() {

	char msg1[] = "Gook Luck";
	char msg2[20];
	char msg3[20];
	printf("%d\n", strlen(msg1));//9
	//���ڿ��� ũ��(����)�� ���ߴ�
	//���ڿ��� �޸� ũ�⸦ ���غ���
	printf("%d\n", sizeof(msg1));//10
	//���ڿ� ����� ��������
	strcpy(msg2, msg1);
	printf("%s\n", msg2);
	strcpy(msg3, "Have a Good Time!");
	printf("%s\n", msg3);

	//printf("%d\n", sizeof(msg2));

	char greet1[] = "hello";
	char greet2[] = "hello";
	int result;
	result = strcmp(greet1, greet2);
	printf("%d\n", result);
	if (result == 0) {

		printf("���ڿ��� ��ġ�մϴ�.");
	}
	else {
		printf("���ڿ��� ��ġ���� �ʽ��ϴ�.");
	}







	return 0;
}