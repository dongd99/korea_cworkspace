#include <stdio.h>

void main() {
	int num;
	while (1) {

		printf("���ڸ� �Է��ϼ���:");
		int result = scanf_s("%d", &num);
		if (result == 1) {

			printf("%d\n", result);
		}
		else {

			//����(�ӽñ�����) ����
			//'\n' (����� - LF(10))
			while (getchar() != '\n') {//'\n' �� ���ö����� ��� ���� ����
				printf("�߸��� �Է��Դϴ�.\n");
			}
		}
	}

}