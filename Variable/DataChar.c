//#include <stdio.h>
//#define _CRT_NO_SECURE_WARNINGS
//
//int main() {
//
//	//�ƽ�Ű �ڵ� - 1byte
//	char ch = '0';
//	printf("%c %d\n", ch, ch);
//	for (int i = 1; i < 10; i++) {
//		ch += 1;
//		printf("%c %d\n", ch, ch);
//	}
//	
//	// �����ڵ� - 2byte �迭�� �����ؾ���
//
//	char han[] = "��";
//	printf("%s %x\n", han, han);
//	
//	char han2[] = "\uAC00";
//	char han3[] = "�ȳ��ϼ��� �ݰ����ϴ�.";
//	printf("%s %x\n", han2, han2);
//	//�迭�� �ּҰ��� ������ �ֱ� ������ �ּ� �����ڸ� ����� �ʿ䰡 ����.
//	//���� �ּҿ����ڸ� ������ �迭�� �ε����� �� �ּҸ� ���ϴµ� ����. 
//	printf("%x %s\n", han3, han3[1]);
//
//
//
//	return 0;
//}