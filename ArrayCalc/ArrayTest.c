#include <stdio.h>
#define MAX_LEN 4

void main() {


	//�迭����� ���� �� ����
	int scores[MAX_LEN];//�迭�� ũ��� ����� ���
	int idxOfScores = 0;//�迭�� �ε����� ������ ����

	//��� �߰�
	
	if (idxOfScores < MAX_LEN) {
	scores[idxOfScores++] = 80;//scores[0]
	}
	if (idxOfScores < MAX_LEN) 
		scores[idxOfScores++] = 70;//scores[1]
	if (idxOfScores < MAX_LEN) 
		scores[idxOfScores++] = 95;//scores[2]
	if (idxOfScores < MAX_LEN) 
		scores[idxOfScores++] = 80;//scores[3]
	if (idxOfScores < MAX_LEN) 
		scores[idxOfScores++] =100;// �� scores[4] �����ʰ��� ����

	//��ü ���
	for (int i = 0; i < idxOfScores; i++) {

		printf("%d\n", scores[i]);
	}
	
	//�迭 ��� ����
	if(idxOfScores>0)idxOfScores--;
	if(idxOfScores>0)idxOfScores--;
	if(idxOfScores>0)idxOfScores--;
	if(idxOfScores>0)idxOfScores--;
	if(idxOfScores>0)idxOfScores--;

	printf("���� �迭 ����:\n");
	if (idxOfScores == 0) printf("�������\n");
	else
	{
		printf("���� ��� ��:%d", idxOfScores);
		for (int i = 0; i < idxOfScores; i++) {

			printf("%d\n", scores[i]);
		}
	}




}