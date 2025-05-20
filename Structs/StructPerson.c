#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
*  구조체란 여러가지 자료형을 그룹화한 자료형이다.
*/
struct Person {
	char name[20];// 이름 = 멤버변수
	int age;
	float height;

};

int main() {

	//구조체 변수 선언
	struct Person p1;
	struct Person* pp;
	pp = &p1;
	//pp.name = "Korea academy";
	// 구조체의 문자열은 직접 대입할 수 없다.
	strcpy(p1.name, "korea academy");
	printf(p1.name);// 멤버변수 접근연산자 . 
	//또는
	struct Person p2 = { "코리아", 20, 180.1 };
	printf("이름 : %s\n", p2.name);
	printf("나이 : %d\n", p2.age);
	printf("키 : %f\n", p2.height);

	struct Person p[3] = {
		{"일번", 15, 150.5},
		{"이번", 16, 160.5},
		{"삼번", 19, 190.3}
	};
	printf("이름: %s\n", p[0].name);
	printf("나이: %d\n", p[0].age);
	printf("키: %.1f\n", p[0].height);

	for (int i = 0; i < 3; i++) {
		printf("이름: %s\n", p[i].name);
		printf("나이: %d\n", p[i].age);
		printf("키: %.1f\n", p[i].height);
	}

	return 0;
}