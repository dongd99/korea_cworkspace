#include <stdio.h>
/*
	������ ������


*/
int main() {

	char c = 'A';
	char* pc;
	pc = &c;

	printf("������  �� : %c\n", c);
	printf("������ �޸� ���� �� : %x\n", &c);
	printf("�����Ͱ� ������ �޸��� ��ġ : %x\n", pc);
	printf("�������� �޸� ��ġ : %x\n", &pc);
	printf("�����Ͱ� ������ �޸��� �� : %c\n", *pc);

	//�����͸� ����ؼ� ���� �� �ٲٱ�
	*pc = 'B';
	printf("������  �� : %c\n", c);
	printf("������ �޸� ���� �� : %x\n", &c);
	printf("�����Ͱ� ������ �޸��� ��ġ : %x\n", pc);
	printf("�������� �޸� ��ġ : %x\n", &pc);
	printf("�����Ͱ� ������ �޸��� �� : %c\n", *pc);

	//�ڷ����� ũ��
	printf("%dbyte %dbyte\n", sizeof(c), sizeof(pc));

	return 0;
}