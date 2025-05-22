#include <stdio.h>
/*
	- 중첩 구조체 포인터 활용
	- 학생 구조체가 성적 구조체 자료형을 참조
*/

//성적 구조체
typedef struct {
	int math;	// 수학 점수
	int eng;	// 영어 점수
	double avg;	//두 과목의 평균
}Score;

//학생 구조체
typedef struct {
	int number;		//학번
	char name[20];	//이름
	Score score;	//성적 구조체를 참조
}Student;

void showInfo(Student* s) {
	printf("학번 : %d, 이름: %s\n", s->number, s->name);
	printf("수학 : %d, 영어: %d\n", s->score.math, s->score.eng);
	printf("평균 : %.1lf\n", s->score.avg);
}
void calcAvg(Score* score) {//값을 저장하거나 반환하는 것은 필수적으로 포인터로 전달
	score->avg = (score->math + score->eng)/2.0;//실수형으로 자동 형변환
	
}

int main() {

	//구조체 변수 선언
	Student st1 = { .number = 101, .name = "일등해", .score = {99, 100, 0.0} };

	Student st2 = {
		.number = 102,
		.name = "일등원해",
		.score = {100, 98, 0.0}
	};
	//학생 정보 출력
	//showInfo(st1);//호출 시 매개변수로 구조체 변수를 전달
	Student* ps = &st1;
	calcAvg(&st1.score);
	calcAvg(&st2.score);
	showInfo();
	showInfo(&st2);

	return 0;
}