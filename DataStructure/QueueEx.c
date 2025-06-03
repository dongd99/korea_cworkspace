#include <stdio.h>
#define MAX_LEN 10
/*
	큐 자료구조
	먼저 들어온 놈이 먼저 나갑니다
	front - 첫 인덱스(추출시 요놈을 이용) , rear- 끝 인덱스(저장시 요놈을 이용)
*/
int queue[MAX_LEN];
int front = 0;
int rear = 0;
void enQueue(int x) {
	queue[rear] = x;
	printf("%d\n", queue[rear++]);
}
int deQueue() {
	if (front == rear) {
		printf("데이터가 없습니다.");
		return 0;
	}
	return queue[front++];
}
void main() {
	printf("큐 방식으로 자료 저장(넣기)\n");
	
	
	enQueue(10);
	enQueue(20);
	enQueue(30);

	printf("큐 방식으로 자료 추출(빼기)\n");
	printf("%d\n", deQueue());
	printf("%d\n", deQueue());
	printf("%d\n", deQueue());
	printf("%d\n", deQueue());//빈 큐





}