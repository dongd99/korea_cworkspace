#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
	공백(문자)를 지우는 프로그램
*/
void delBlank(char[] ,size_t);
int main() {
	char a[] = "A B c D e F ! 2";

	delBlank(a, sizeof(a));
	printf("%s\n", a);


	return 0;
}
void delBlank(char arr[], size_t arrSize)
{
	int len = strlen(arr);//배열의 크기
	//arr을 저장할 동적 배열을 선언
	char* str = (char*)malloc(len+1);
	int k = 0;//배열의 인덱스

	for (int i = 0; i < len; i++) {
		if (arr[i] != ' ')//arr문자열의 하나하나의 인덱스가 공백이 아니면
			str[k++] = arr[i]; // 동적배열에 저장하세요
	}
	*(str+k) = '\0';
	//strcpy(arr, str);
	strcpy_s(arr, arrSize, str);
	free(str);
	
}