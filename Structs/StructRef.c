#include <stdio.h>	
struct Point {
	int x;
	int y;
};
struct Rectangle {
	struct Point p1;
	struct Point p2;
};

void main() {

	/*��� 1
	struct Rectangle rect;
	rect.p1.x = 1;
	rect.p1.y = 5;

	rect.p2.x = 4;
	rect.p2.y = 2;

	printf("��1(%d, %d), ��2(%d, %d)\n", rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);*/

	//���2

	struct Rectangle rect = {
		.p1 = {1, 5},
		.p2 = {6, 2}
	};
	int width, height;
	width = abs(rect.p1.x - rect.p2.x);
	height = abs(rect.p1.y - rect.p2.y);

	printf("���α��� :  %d, ���� ���� : %d\n", width, height);





}