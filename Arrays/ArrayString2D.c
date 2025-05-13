#include <stdio.h>

/*
	2차원 문자열	
*/

int main() {

	//문자열 배열 생성
	char greet[] = "hello";

	printf("%s\n", greet);

	//2차원 문자열은 [단어의 개수][최대 문자의 수] 개념이다.
	char word[][10] = {
		"sun", 
		"moon",
		"hello",
		"earth",
		"byebye"
	};
	
	printf("%s\n", word[3]);
	int size = sizeof(word) / sizeof(word[0]);
	printf("%d\n", size);
	for (int i = 0; i < size; i++) {
		printf("%s\n", word[i]);
	}
	//문자로 출력





	return 0;

}