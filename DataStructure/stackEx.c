#include <stdio.h>
/*
	스택 자료구조
	- 배열에서 나중에 저장한 자료를 먼저 꺼내는 방식
*/
#define MAX_LEN 10
int stack[MAX_LEN];//stack이라는 이름의 배열 생성
int top = -1; // 배열의 인덱스
void push(int x) {
	stack[++top] = x;
	printf("%d\n", stack[top]);
}
int pop() {
	if (top < 0) {
		printf("빈 스택입니다.\n");
		return 0;
	}
	return stack[top--];
}
void main() {

	printf("스택 방식으로 자료 저장(넣기)\n");
	push(10);
	push(20);
	push(30);

	printf("스택 방식으로 자료 삭제(빼기)\n");
	printf("%d\n", pop()); 
	printf("%d\n", pop()); 
	printf("%d\n", pop()); 
	printf("%d\n", pop()); 

	}