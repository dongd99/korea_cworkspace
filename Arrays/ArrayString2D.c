#include <stdio.h>

/*
	2���� ���ڿ�	
*/

int main() {

	//���ڿ� �迭 ����
	char greet[] = "hello";

	printf("%s\n", greet);

	//2���� ���ڿ��� [�ܾ��� ����][�ִ� ������ ��] �����̴�.
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
	//���ڷ� ���





	return 0;

}