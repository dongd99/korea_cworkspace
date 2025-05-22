#include <stdio.h>

typedef struct {
	int no;
	int age;
	char name[20];
	
}Hero;

int main() {

	//구조체 변수 선언
	Hero hero1 = { 1, 23, "이배달" };
	//구조체 포인터 선언
	Hero* ph = &hero1;
	printf("%d %s %d\n",hero1.no, hero1.name, hero1.age);









	return 0;
}