#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
*  ����ü�� �������� �ڷ����� �׷�ȭ�� �ڷ����̴�.
*/
struct Person {
	char name[20];// �̸� = �������
	int age;
	float height;

};

int main() {

	//����ü ���� ����
	struct Person p1;
	struct Person* pp;
	pp = &p1;
	//pp.name = "Korea academy";
	// ����ü�� ���ڿ��� ���� ������ �� ����.
	strcpy(p1.name, "korea academy");
	printf(p1.name);// ������� ���ٿ����� . 
	//�Ǵ�
	struct Person p2 = { "�ڸ���", 20, 180.1 };
	printf("�̸� : %s\n", p2.name);
	printf("���� : %d\n", p2.age);
	printf("Ű : %f\n", p2.height);

	struct Person p[3] = {
		{"�Ϲ�", 15, 150.5},
		{"�̹�", 16, 160.5},
		{"���", 19, 190.3}
	};
	printf("�̸�: %s\n", p[0].name);
	printf("����: %d\n", p[0].age);
	printf("Ű: %.1f\n", p[0].height);

	for (int i = 0; i < 3; i++) {
		printf("�̸�: %s\n", p[i].name);
		printf("����: %d\n", p[i].age);
		printf("Ű: %.1f\n", p[i].height);
	}

	return 0;
}