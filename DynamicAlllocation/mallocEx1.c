#include <stdio.h>
#include <stdlib.h>
/*
	포인터를 사용한 동적 할당
	- 프로그램이 실행중에 메모리 사용
*/

int main() {
	//	일반적으로 정수형 배열을 4개 선언한다고 보자고~
	int arrInt[4];
	//	이렇게 선언하겠지?
	//	그럼 초기화를 하면
	arrInt[0] = 1;
	arrInt[1] = 2;
	//	등등 초기화를 할거야 
	//	이건 메모리 영역에서 stack(스택)영역에 들어가지요
	//	정적 메모리가 아닌 동적 메모리(힙)에 할당하려면
	int* pn = (int*)malloc(sizeof(int) *4);
	//	선언시 사용할 데이터타입(포인터) 변수명 =	int형 포인터를 사용 malloc(	(int형 사이즈) * 갯수) 
	//	이렇게 선언해준다. 이 때 헤더파일인 stdlib.h이 필요
	if (pn == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	pn[0] = 10;
	pn[1] = 20;
	pn[2] = 30;
	pn[3] = 40;
	/*for (int i = 0; i < 4; i++) {
		printf("%d\n", pn[i]);
	}*/
	printf("%d %d \n", pn[0], *(pn+0));
	printf("%d %d \n", pn[1], *(pn+1));
	*(pn + 1) = 50;
	*(pn + 2) = 350;
	*(pn + 3) = 150;

	for (int i = 0; i < 4; i++) {
		printf("%d\n", *(pn+i));
	}
	//	malloc으로 동적할당을 사용하면 메모리 해제가 필요하다
	free(pn);
	//	동적 할당으로 만들어진 pn을 메모리 해제

	return 0;
}