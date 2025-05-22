#include <stdio.h>
/*
	- ��ø ����ü ������ Ȱ��
	- �л� ����ü�� ���� ����ü �ڷ����� ����
*/

//���� ����ü
typedef struct {
	int math;	// ���� ����
	int eng;	// ���� ����
	double avg;	//�� ������ ���
}Score;

//�л� ����ü
typedef struct {
	int number;		//�й�
	char name[20];	//�̸�
	Score score;	//���� ����ü�� ����
}Student;

void showInfo(Student* s) {
	printf("�й� : %d, �̸�: %s\n", s->number, s->name);
	printf("���� : %d, ����: %d\n", s->score.math, s->score.eng);
	printf("��� : %.1lf\n", s->score.avg);
}
void calcAvg(Score* score) {//���� �����ϰų� ��ȯ�ϴ� ���� �ʼ������� �����ͷ� ����
	score->avg = (score->math + score->eng)/2.0;//�Ǽ������� �ڵ� ����ȯ
	
}

int main() {

	//����ü ���� ����
	Student st1 = { .number = 101, .name = "�ϵ���", .score = {99, 100, 0.0} };

	Student st2 = {
		.number = 102,
		.name = "�ϵ����",
		.score = {100, 98, 0.0}
	};
	//�л� ���� ���
	//showInfo(st1);//ȣ�� �� �Ű������� ����ü ������ ����
	Student* ps = &st1;
	calcAvg(&st1.score);
	calcAvg(&st2.score);
	showInfo();
	showInfo(&st2);

	return 0;
}