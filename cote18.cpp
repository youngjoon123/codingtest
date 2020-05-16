#include <stdio.h>

int main() {

	int n, m,wave, count=0, max=0;

	scanf_s("%d %d", &n, &m);

	for (int i = 1; i <=n ; i++) {
		scanf_s("%d", &wave);
		if (wave > m) {
			count++;
		}
		else count = 0;

		if (count > max) { max = count; }
	}

	printf("%d", max);
	return 0;
}