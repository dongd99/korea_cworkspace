#include <stdio.h>	

int main() {

	//������ ��ȯ�ϱ�
	int x = 1;
	int y = 2;
	printf("x = %d, y = %d\n", x, y);
	printf("^^^^^��ȯ ��^^^^^\n");
	int temp;// ��ȯ�� ���� ����

	temp = x;
	x = y;
	y = temp;
	printf("x = %d, y = %d\n", x, y);
	printf("^^^^^��ȯ ��^^^^^\n");
	printf("\n");

	//���� ���� �����ڴ� ����� ������ ��������
	int val = 10;
	
	val += 3; //val = val + 3;
	printf("%d\n", val);
	val -= 3;
	printf("%d\n", val);













	return 0;
}