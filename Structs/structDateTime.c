#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>
int main() {

	time_t ct = time(NULL);//���� �ð�
	//tm ����ü �������� ���� ����
	struct tm* now = localtime(&ct);// ���� �ð��� ��¥ ����
	printf("���� ��¥: %d : %d : %d\n", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);
	char* days[] = {"��", "��", "ȭ", "��", "��","��","��"};
	int index = now->tm_wday;
	printf("���� ���� : %s����\n", days[index]);
	while (1) {
		ct = time(NULL);
		now = localtime(&ct);
		int hour = (now->tm_hour - 12) ? now->tm_hour - 12 : now->tm_hour;
		char* ampm = (now->tm_hour > 12 ? "����" : "����");

		printf("���� �ð� %s: %d : %d : %d\n",ampm, hour, now->tm_min, now->tm_sec);
		Sleep(1000);
	}
	// ���� �߰��ϱ�
	
	

	return 0;
}