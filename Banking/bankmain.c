#include <stdio.h>
#define OWNER_LEN 40 //예금주 성함 길이
#define MAX_ACCOUNTS 3 //최대 계좌 수
/*
	프로젝트 개요
	- 은행 업무 프로젝트
		. 은행 계정(BankAccount) 구조체 정의
		. 메뉴 : 계좌생성, 예금, 출금, 계좌목록, 종료
*/
// 구조체 정의 존
typedef struct {
	int ano; // 계좌번호
	char owner[OWNER_LEN];//예금주
	int balance; //잔고
}BankAccount;
//전역 변수 - 배열 선언
BankAccount accounts[MAX_ACCOUNTS];
int idxOfAccount = 0;// 배열의 인덱스
//++++++++++함수 존+++++++++
// 계좌 생성 함수
void createAccount() {
	if (idxOfAccount >= MAX_ACCOUNTS) {
		printf("계좌를 더이상 생성할 수 없습니다.\n");
		return;
	}

	printf("=====신규 계좌 생성=====\n");
	printf("계좌 번호 :");
	scanf_s("%d", &accounts[idxOfAccount].ano);
	printf("예금주 명 :");
	scanf_s("%s", &accounts[idxOfAccount].owner,sizeof(accounts[idxOfAccount].owner));
	printf("잔고 :");
	scanf_s("%d", &accounts[idxOfAccount].balance);
	idxOfAccount++;
	printf("결과 : 계좌가 생성 되었습니다.\n");

}

//계좌 목록
void listAccount() {
	if(idxOfAccount == 0){
		printf("등록된 계좌가 없습니다.\n");
		return;
	}
	printf("************* 계좌 목록 ****************\n");

	for (int i = 0; i < idxOfAccount; i++) {
		printf("계좌번호: %d\t", accounts[i].ano);
		printf("예금주 명: %s\t", accounts[i].owner);
		printf("잔고: %d \n", accounts[i].balance);
	}
}

//예금
void deposit() {
	//계좌 검색 - 등록된 계좌 검색
	int accountNumber;		// 계좌 번호(외부입력)
	int money;				// 입금액

	printf("입금할 계좌번호: ");
	scanf_s("%d", &accountNumber);
	for (int i = 0; i < idxOfAccount; i++) {
		//외부에서 입력한 계좌와 등록된 계좌번호가 일치한다면
		if (accountNumber == accounts[i].ano) {
			printf("입금액: ");
			scanf_s("%d", &money);
			accounts[i].balance += money;
			printf("정상 처리되었습니다. 현재 잔액: %d\n", accounts[i].balance);
			return;//for문 탈출
		}
	}
	printf("계좌를 찾을 수 없습니다.\n");
}

//출금
void withdraw() {
	//계좌 검색 - 등록된 계좌 검색
	int accountNumber;		// 계좌 번호(외부입력)
	int money;				// 출금액

	printf("출금할 계좌번호: ");
	scanf_s("%d", &accountNumber);
	for (int i = 0; i < idxOfAccount; i++) {
		//외부에서 입력한 계좌와 등록된 계좌번호가 일치한다면
		if (accountNumber == accounts[i].ano) {
			printf("출금액: ");
			scanf_s("%d", &money);
			if (money > accounts[i].balance || money < 0) {
				printf("잔액초과입니다. 현재 잔액: %d\n", accounts[i].balance);
			}
			else {
				accounts[i].balance -= money;
				printf("정상 처리되었습니다. 현재 잔액: %d\n", accounts[i].balance);
				return;//for문 탈출
			}
		}
	}
	printf("계좌를 찾을 수 없습니다.\n");
}



//메인함수 진입점
int main() {

	int choice; //메뉴 선택 변수 선언
	while (1) {
		printf("=======================================================================\n");
		printf("||   1. 계좌생성  |  2.예금  |  3. 출금  |  4. 계좌목록  | 5. 종료   ||\n");
		printf("=======================================================================\n");
		printf("선택 > ");
		scanf_s("%d", &choice);
		while (getchar() != '\n');
		switch (choice) {
		case 1:
			createAccount();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdraw();
			break;
		case 4:
			listAccount();
			break;
		case 5:
			printf("프로그램을 종료합니다.\n");
			return;
			break;
		default:
			printf("잘못된 입력값입니다. 다시 입력하세요.\n");
			
		}

	}
	system("pause");//콘솔창 닫힘 문제 해셜



	return 0;
}