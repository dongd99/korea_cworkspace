#include <stdio.h>
typedef struct {
	int id;
	char name[20];
	int salary;
}Employee;



void main() {

	//struct ����ü ���� ����
	//Employee e1 = { 1, "�ϻ��", 3000000 };

	//printf("��� ID : %d, �̸� : %s, ���� : %d", e1.id, e1.name, e1.salary);

	Employee m[3] = {
		{1, "��븮", 3400000},
		{2, "�ڻ��", 2900000},
		{3, "�ֺ���", 3800000}
	};
	for (int i = 0; i < sizeof(m) / sizeof(m[0]); i++) {
		printf("��� ID : %d, �̸� : %s, ���� : %d\n",m[i].id, m[i].name, m[i].salary);
	}





}