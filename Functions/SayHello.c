#include <stdio.h>

//main() �Լ� = ���α׷��� �����ϴ� ���
//return �� �ִ� �Լ� (�ü������ ��ȯ�ϴ� ��)
/*
	�Լ��� ���´� �ڷ��� �Լ��� () {������}
	void���� ��ȯ�ڷ����� ���� ��(return�� ����)
	�Լ��� ��ġ
	- main()�� �� = ����� ������ ���� �ؾ���
	- main()�� �Ʒ� = ������ main()������ �ؾ��ϰ� ������ main()�Ʒ��� �ص� ���z
	
*/
void sayHello();
void sayHello2(char name[]);
int main() {

	sayHello();
	sayHello2("decl");



	return 0;
}

//�λ��ϱ� ����� �ϴ� �Լ� ����
void sayHello() {
	printf("�ȳ��ϼ���\n");
}

//�̸��� �θ��� �λ��ϱ� ���
void sayHello2(char name[]) {
	printf("%s ��, �ȳ��ϼ���\n", name);
}