#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <string.h>


/*
	strtok(문자열, 구분기호) = 구분시호(,: :"")
	문자열을 구분기호로 구분해서 배열로 반환해줌
	- 배열을 사용
	- 랜덤하게 요소를 추출
*/


void main() {

	char words[] = "ant bear chicken pig";
	//char* words2[] = { "ant", "bear", "chicken", "pig" };
	char* wordList[4]; //분리된 단어 저장 배열
	int idxOfWords = 0;// 배열의 인덱스
	char* ptr; //문자열을 가지는 포인터
	ptr = strtok(words, " ");//words를 공백으로 구분해서 배열에 저장
	while (ptr != NULL) {// ptr이 NULL이 아닐 때까지 실행
		wordList[idxOfWords++] = ptr;
		ptr = strtok(NULL, " ");
	}
	/*처음 원본 문자열을 strtok()에 넣으면,
	strtok()은 구분자를 기준으로 문자열을 자르고,
	구분자를 만난 지점 다음 문자 위치를 내부적으로 기억해.
	그래서 이후에 strtok(NULL, delim)을 호출하면,
	기억해둔 위치부터 다시 구분자 기준으로 자르기 시작하는 거야.*/
	/*
	* strtok(NULL, delim)에서 NULL을 넣는 이유는,
		“이미 한 번 문자열을 자른 적 있으니, 그 다음 위치부터 계속해서 delim 기준으로 자르라”는 뜻이다.
	*/
	/*printf("%s\n", wordList[0]);
	printf("%s\n", wordList[1]);*/
	srand(Time(NULL)
	//printf("%s\n", words);
	//printf("%s\n", words2[0]); ant
	//printf("%s\n", words2[1]); bear






}