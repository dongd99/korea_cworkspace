#include <stdio.h>
/*
	���� ����( ������ ����) - static�� ���� �տ� ����
*/
void call() {

	static int x = 0;
	x += 1;
	printf("���� ȣ���� %d��°�Դϴ�.\n", x);
}


int main()
{
	call();
	call();
	call();
	call();

	return 0;
}