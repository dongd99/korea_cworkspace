#include <stdio.h>

typedef struct {
	int data;
	int* link;

}Node;

void main() {

	Node node[10];//구조체 Node를 10개를 만들 수 있는 배열 선언
	int i;
	for (i = 0; i < 10; i++) {
		node[i].data = i + 1;

	}
	for (i = 0; i < 10; i++) {
		printf("%d ", node[i].data);

	}
	printf("\n");
	//node가 사라짐
	node[1].data = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ", node[i].data);

	}
	
	for (i = 1; i < 9; i++) {
		node[i].data = node[i + 1].data;

	}
	node[9].data = 0;
	printf("\n");
	for (i = 0; i < 10; i++) {
		printf("%d ", node[i].data);

	}

	






}