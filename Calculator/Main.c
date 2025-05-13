#include <stdio.h>	
//사용자 정의 헤더파일은 꺽쇠 기호가 아닌 쌍따옴표를 사용해야함
#include "calculator.h"


int main() {
	
	int x = 3, y = 4;
	int value1;
	value1 = add(x, y);
	printf("%d\n", value1);
	
	value1 = factorial(y);
	printf("%d! = %d\n", y ,value1);



	return 0;
}