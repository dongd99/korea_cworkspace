//#include <stdio.h>
//#define _CRT_NO_SECURE_WARNINGS
//
///*
//	�ڷ����� ����
//
//
//*/
//int main() {
//	/*
//		�ƽ�Ű�ڵ��
//		char ���� 1����Ʈ���� �� �� 1��Ʈ�� ��ȣ ��Ʈ�� 
//		7��Ʈ�θ� ����ϸ� �ȴ�.
//		char = -128 ~ 127
//		unsigned char : 0~ 255(��ȣ���� �ڷ���)
//
//		*/
//
//	printf("==== char �ڷ��� -====\n");
//	char ch = 'A';
//	
//
//	printf("%c %d\n", ch, ch);  
//	
//	char value1 = -128;
//	printf("%d\n", value1);
//	char value2 = 128;// �����÷ο� �߻�
//	printf("%d\n", value2);
//	unsigned char value3 = 129;
//	printf("%d\n", value3);
//
//	/*
//		int��  4byte = 32bit
//		long - windowOS - 4Byte , MacOS - 8Byte
//		long long - 8Byte
//	*/
//	printf("=====int �ڷ��� ====\n");
//	int iNum = 2100000000;
//	printf("%d\n", iNum);
//	int iNum2 = 2200000000;// �����÷ο� �߻�
//	printf("%d\n", iNum2);
//	long long llNum = 22000000000l;//long long�� ���� �ڿ� 'L' �Ǵ� 'l'�� �־��ش�.
//	printf("%lld\n", llNum);
//
//	/*
//		�Ǽ��� = �Ҽ����� �ִ� ��
//		float = 4byte,  �Ҽ��� 6�ڸ����� ǥ��('f'�� 'F'�� ����)
//		double = 8byte, �Ҽ��� 15�ڸ����� ǥ��
//	*/
//	printf("====float �� double �ڷ��� ====\n");
//	float fNum = 0.1234567F;
//	printf("%f\n", fNum);
//
//	double dNum = 0.123456789012345;
//	printf("%.15lf\n", dNum);
//
//
//
//
//	return 0;
//}
