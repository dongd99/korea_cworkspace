//#include <stdio.h>
//
//int main() {
//
//	//�迭�� ����
//	char a1[] = "NET"; // ���ڿ��� ������ �迭 a1�� ���� �迭�� ũ��� 4�̴� ������ �ι��ڸ� �����ϱ� �����̴�
//	char a2[4];
//	printf("%d\n", sizeof(a1));
//
//	printf("%c\n", a1[0]);
//	printf("%c\n", a1[1]);
//	printf("%c\n", a1[2]);
//	printf("%c\n", a1[3]);
//	
//	//a1�� a2�� ���� -> a1[0] = a1[0]
//	int size = sizeof(a1) / sizeof(a1[0]);
//	for (int i = 0; i < size; i++) {
//		a2[i] = a1[i];
//	}
//
//	//a2�� ����ϱ�
//	for (int i = 0; i < 4; i++) {
//		printf("%c\n", a2[i]);
//	}
//
//	//a2�� ���ڿ��� ���
//	printf("%s\n", a2);
//	//a1�� a2�� �Ųٷ� �����ϱ� -> a2[0] = a1[2] �� ���� �ι��� �����ؼ� 3�� �ƴ� 2�� ����
//	for (int i = 0; i < size-1; i++) {
//		a2[i] = a1[2 - i];
//
//	}
//	//a2[3] = '\0';
//	printf("%s\n", a2);
//	return 0;
//}