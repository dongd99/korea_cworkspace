#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <Windows.h>


int main() {

	time_t ct;//���� �ð� ���� ����
	struct tm* now; //����ü ���� ����

	//���� �ð� ��������
	
	
	while (1) {
		ct = time(NULL);
		now = localtime(&ct);// ct�� �ּҸ� �Ű��� ����
		printf("%d�� ", now->tm_year + 1900);
		printf("%d�� ", now->tm_mon + 1);
		printf("%d�� ", now->tm_mday);
		printf("%d�� ", now->tm_hour);
		printf("%d�� ", now->tm_min);
		printf("%d��\n", now->tm_sec);
		Sleep(1000);
	}


	return 0;
}