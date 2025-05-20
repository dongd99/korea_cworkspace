#include <stdio.h>
#include <stdlib.h>// srand(), rand()
#include <time.h> // time(). clock()
#include <string.h>
/*
	���� Ÿ�� ��
	- ���� �ܾ �����ϰ� ������
	- ����ڰ� �Է��ؼ� �ܾ ��ġ�ϸ� "���!", �ƴϸ� "�ٽ� ����!"
	- �������� �� 10ȸ �̰�, ���� �ҿ�ð��� ������
*/
void main() {

	char* words[] = { "ant", "bear", "chicken", "deer", "elephant", "fox", "giraffe", "horse", "monkey", "lion", "tiger" };
	char* words2[] = { "stdio.h", "#include", "void main", "domain-lookup", "strcmp();", "lookup", "[1010]" };

	char* question;// ����(�����ϰ� ����� �ܾ�)

	char answer[30];// ����ڰ� �Է��� �ܾ�

	int n = 1;// ���� ��ȣ
	int life = 10;
	clock_t start, end;// ���۰� ���� �ð�
	double elapsedTime; //�ҿ�ð�

	//���� �õ� ����
	srand(time(NULL));
	int size1 = sizeof(words) / sizeof(words[0]);
	int size2 = sizeof(words2) / sizeof(words2[0]);

	printf("���� Ÿ�� ����, �غ�Ǹ� ����");
	getchar();

	start = clock();// ���� �ð�
	while (n <= 10) {

		printf("\n���� %d\n", n);
		int rndindex = rand() % size1;
		question = words[rndindex];
		printf("%s\t ������ = %d\n", question, life);
		scanf_s("%s", answer, sizeof(answer));
		if (strcmp(answer,question) == 0) {
			printf("����!\n");
			n += 1;
		}
		else {
			printf("����, ������ -1");
			life -= 1;
			
		}
		if (n > 10 ||life <= 0) {
			break;
		}
	}


	end = clock();
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("���� �ҿ� �ð� : %.2lf��", elapsedTime);
	

	printf("���� Ÿ�� ���� 2�ܰ�, �غ�Ǹ� ����");
	getchar();
	
	start = clock();// ���� �ð�
	n = 1;
	while (n <= 10) {

		printf("\n���� %d\n", n);
		int rndindex = rand() % size2;
		question = words2[rndindex];
		printf("%s\t ������ = %d\n", question, life);
		scanf_s("%s", answer, sizeof(answer));
		if (strcmp(answer, question) == 0) {
			printf("����!\n");
			n += 1;
		}
		else {
			printf("����, ������ -1");
			life -= 1;

		}
		if (n > 10 || life <= 0) {
			break;
		}
	}

	end = clock();
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("���� �ҿ� �ð� : %.2lf��", elapsedTime);






}