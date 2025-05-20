#include <stdio.h>
typedef struct {
	int id;
	char name[20];
	int salary;
}Employee;



void main() {

	//struct 구조체 변수 선언
	//Employee e1 = { 1, "일사원", 3000000 };

	//printf("사원 ID : %d, 이름 : %s, 월급 : %d", e1.id, e1.name, e1.salary);

	Employee m[3] = {
		{1, "김대리", 3400000},
		{2, "박사원", 2900000},
		{3, "최부장", 3800000}
	};
	for (int i = 0; i < sizeof(m) / sizeof(m[0]); i++) {
		printf("사원 ID : %d, 이름 : %s, 월급 : %d\n",m[i].id, m[i].name, m[i].salary);
	}





}