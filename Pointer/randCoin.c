#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
/*
	
*/
void main() {
	int coin;
	int you;
	int winTime = 0;
	//char aspect[][6] = {"�ո�", "�޸�"};
	char* aspect[] = {"", "�ո�", "�޸�" };

	//printf("%s\n", aspect[0]);
	srand(time(NULL));

	printf("�ո��� 1, �޸��� 2, ����� �ٸ� ���� �Է��ϼ���\n");
	while (1) {
		coin = rand() % 2+1;
		printf("������ �������ϴ�. �ո�? �޸�? :");
		scanf_s("%d", &you);
		printf("\n����� : %s, ����: %s\n", aspect[you], aspect[coin]);	
		
		if (you < 1 || you>2) {
			break;
		}
		else {
			if (coin == you) {
				printf("������ �����̱���!\n");
				winTime += 1;
				printf("���� %d�� ����!\n", winTime);
			}
			else {
				printf("Ʋ�Ƚ��ϴ٤̤�\n");
				winTime = 0;
			}
			Sleep(300);
		}
		
	}









}