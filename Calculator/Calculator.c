//함수의 구현부

int add(int x, int y) {
	return x + y;
}

int factorial(int n) {
	int facto = 1;
	for (int i = 1; i <= n; i++) {
		facto *= i;
	}
	return facto;
}