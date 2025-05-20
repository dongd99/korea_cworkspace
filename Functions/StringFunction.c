#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	
//strcpy(), strlen(), strcmp()
//문자열복사, 문자열갯수, 문자열비교

int main() {

	char msg1[] = "Gook Luck";
	char msg2[20];
	char msg3[20];
	printf("%d\n", strlen(msg1));//9
	//문자열의 크기(개수)를 구했다
	//문자열의 메모리 크기를 구해보자
	printf("%d\n", sizeof(msg1));//10
	//문자열 복사로 가보자잇
	strcpy(msg2, msg1);
	printf("%s\n", msg2);
	strcpy(msg3, "Have a Good Time!");
	printf("%s\n", msg3);

	//printf("%d\n", sizeof(msg2));

	char greet1[] = "hello";
	char greet2[] = "hello";
	int result;
	result = strcmp(greet1, greet2);
	printf("%d\n", result);
	if (result == 0) {

		printf("문자열이 일치합니다.");
	}
	else {
		printf("문자열이 일치하지 않습니다.");
	}







	return 0;
}