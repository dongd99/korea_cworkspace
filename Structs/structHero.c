#include <stdio.h>

typedef struct {
	int no;
	int age;
	char name[20];
	
}Hero;

int main() {

	//����ü ���� ����
	Hero hero1 = { 1, 23, "�̹��" };
	//����ü ������ ����
	Hero* ph = &hero1;
	printf("%d %s %d\n",hero1.no, hero1.name, hero1.age);









	return 0;
}