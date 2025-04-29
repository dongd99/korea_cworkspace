//#include <stdio.h>	
//
//void main() {
//	int coffee = 5;
//	int money;
//	while (1) {
//		printf("동전을 넣어주세요. :");
//		int result = scanf_s("%d", &money);
//		if (result != 1) {// scanf가 매개변수의 데이터형에 따라 정상적으로 입력받은지 확인하는 단계
//			//문자입력 오류 처리
//			while ((money = getchar()) != '\n') {
//				
//			}
//			printf("비정상처리, 동전을 입력하세요\n");
//			continue;
//		}
//		else
//		{
//			//문자입력 정상 처리
//			
//			if (money > 500) {
//				printf("커피가 나오고, 거스름돈 %d원을 돌려받습니다.\n", money - 500);
//				coffee--;
//			}
//			else if (money == 500) {
//				printf("커피가 나옵니다.\n");
//				coffee--;
//			}
//			else {
//				printf("커피가 나오지 않고, 돈을 돌려줍니다.\n");
//			}
//			if (coffee == 0) {
//				printf("커피가 모두 소진되어 판매를 중단합니다.\n");
//				break;
//			}
//		}
//		
//		
//	}
//
//
//
//
//}