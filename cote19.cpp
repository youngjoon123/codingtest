//뒤에서 부터 제일 큰거 만나면 count ++
#include <stdio.h>

int main() {
	int n, i, cnt = 0, h[101], max;
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &h[i]);
	}
	max = h[n];
	for (i = n - 1; i > 0; i--) {
		if (h[i] > max) {
			cnt++;
			max = h[i];
		}
	}

	printf("%d", cnt);
	return 0;
}