//#include <stdio.h>
//
//
//void main() {
//
//	char fr1[5] = "apple";
//	char fr2[6] = "apple";//���ڿ��� ���� '\0'(NULL ����)�� ����
//	char fr3[] = "�ٳ���";//�ѱ��� 2byte�� ����ؾ��Ѵ�. �� ���� �迭�� �ι��� �����ؼ� 7����Ʈ�� �迭�� ������.
//	char fr4[] = "banana";
//
//	printf("%s\n", fr1);
//	printf("%s\n", fr2);
//	printf("%s\n", fr3);
//	printf("%s, %d \n", fr4, sizeof (fr4));
//	printf("%dbyte\n", sizeof(fr2[0]));
//
//	int size = sizeof(fr4) / sizeof(fr4[0]);
//	printf("fr2 �迭�� ũ�� : %d\n", size);
//
//	//fr2�� %c�� ���
//	for (int i = 0; i < size; i++)
//	{
//		printf("%c", fr4[i]);
//	}
//
//
//
//
//
//
//}