//#include <stdio.h>
//
//
//void main() {
//
//	char fr1[5] = "apple";
//	char fr2[6] = "apple";//문자열의 끝은 '\0'(NULL 문자)이 포함
//	char fr3[] = "바나나";//한글은 2byte로 계산해야한다. 즉 옆에 배열은 널문자 포함해서 7바이트의 배열을 가진다.
//	char fr4[] = "banana";
//
//	printf("%s\n", fr1);
//	printf("%s\n", fr2);
//	printf("%s\n", fr3);
//	printf("%s, %d \n", fr4, sizeof (fr4));
//	printf("%dbyte\n", sizeof(fr2[0]));
//
//	int size = sizeof(fr4) / sizeof(fr4[0]);
//	printf("fr2 배열의 크기 : %d\n", size);
//
//	//fr2를 %c로 출력
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