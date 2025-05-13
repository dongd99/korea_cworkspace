#include <stdio.h>

//main() 함수 = 프로그램을 실행하는 기능
//return 이 있는 함수 (운영체제에게 반환하는 것)
/*
	함수의 형태는 자료형 함수명 () {구현부}
	void형은 반환자료형이 없을 때(return이 없음)
	함수의 위치
	- main()의 위 = 선언과 구현을 같이 해야함
	- main()의 아래 = 선언은 main()위에서 해야하고 구현은 main()아래에 해도 ㄷ횀
	
*/
void sayHello();
void sayHello2(char name[]);
int main() {

	sayHello();
	sayHello2("decl");



	return 0;
}

//인사하기 기능을 하는 함수 정의
void sayHello() {
	printf("안녕하세요\n");
}

//이름을 부르는 인사하기 기능
void sayHello2(char name[]) {
	printf("%s 님, 안녕하세요\n", name);
}