// 자연수 입력받아서 약수 출력
#include <stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d,", i);
		}
	}
}