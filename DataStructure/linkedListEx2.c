#include <stdio.h>
/*
* - 자기 참조 구조체 :
* 
* 
*/
typedef struct {
	int data;
	struct List* next; // 자기 참조 구조체
}List;
int main() {

	List x, y, z;
	x.data = 10;
	y.data = 20;
	z.data = 30;

	//노드연결
	x.next = &y;
	y.next = &z;
	z.next = NULL;//마지막 노드

	//포인터를 사용한 리스트 순회
	List* p;
	p = &x;
	printf("%d--%x\n", x.data, p->next);
	p = p->next;
	printf("%d--%x\n", y.data, p->next);
	p = p->next;
	printf("%d--%x\n", z.data, p->next);
	//노드 삭제(y 제거)
	x.next = y.next;
	y.next = NULL;
	
	for (p = &x; p != NULL; p = p->next) {
		printf("%d--%x\n", p->data, p->next);
	}


	return 0;
}