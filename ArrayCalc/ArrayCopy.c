//#include <stdio.h>
//
//int main() {
//
//	//배열의 복사
//	char a1[] = "NET"; // 문자열을 저장한 배열 a1을 선언 배열의 크기는 4이다 이유는 널문자를 포함하기 때문이다
//	char a2[4];
//	printf("%d\n", sizeof(a1));
//
//	printf("%c\n", a1[0]);
//	printf("%c\n", a1[1]);
//	printf("%c\n", a1[2]);
//	printf("%c\n", a1[3]);
//	
//	//a1을 a2에 복사 -> a1[0] = a1[0]
//	int size = sizeof(a1) / sizeof(a1[0]);
//	for (int i = 0; i < size; i++) {
//		a2[i] = a1[i];
//	}
//
//	//a2를 출력하기
//	for (int i = 0; i < 4; i++) {
//		printf("%c\n", a2[i]);
//	}
//
//	//a2를 문자열로 출력
//	printf("%s\n", a2);
//	//a1을 a2에 거꾸로 복사하기 -> a2[0] = a1[2] 맨 끝에 널문자 생각해서 3이 아닌 2로 저장
//	for (int i = 0; i < size-1; i++) {
//		a2[i] = a1[2 - i];
//
//	}
//	//a2[3] = '\0';
//	printf("%s\n", a2);
//	return 0;
//}