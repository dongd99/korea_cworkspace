//#include <stdio.h>
//#define _CRT_NO_SECURE_WARNINGS
//
//int main() {
//
//	//아스키 코드 - 1byte
//	char ch = '0';
//	printf("%c %d\n", ch, ch);
//	for (int i = 1; i < 10; i++) {
//		ch += 1;
//		printf("%c %d\n", ch, ch);
//	}
//	
//	// 유니코드 - 2byte 배열에 저장해야함
//
//	char han[] = "가";
//	printf("%s %x\n", han, han);
//	
//	char han2[] = "\uAC00";
//	char han3[] = "안녕하세요 반갑습니다.";
//	printf("%s %x\n", han2, han2);
//	//배열은 주소값을 가지고 있기 때문에 주소 연산자를 사용할 필요가 없다.
//	//만약 주소연산자를 쓰려면 배열의 인덱스의 각 주소를 구하는데 쓴다. 
//	printf("%x %s\n", han3, han3[1]);
//
//
//
//	return 0;
//}