#include <stdio.h>
/*
	팩토리얼 구현
*/
long long fact(int x) {
	if (x == 1) {
		return 1;
	}
	return (long long)x * fact(x - 1);
}
/*
	10진수를 2진수로변환
*/
void dex_bin(int x) {
	if (x == 0 || x == 1) 
		return printf("%d",x);
	dex_bin(x/2);	
	printf("%d", x%2);	
}


void main() {
	int input;
	/*while(1){
		printf("팩토리얼을 만들겁니다 20이하의 숫자 입력하세요[0 :종료]:");
		scanf_s("%d", &input);
		if (input == 0) break;		
		printf("%d까지의 곱 : %lld\n",input, fact(input));
	}*/
	dex_bin(129);
	// 1010
	dex_bin(72);




}