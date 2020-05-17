//배열에다 담아 놓고 비교해야함 ->c++ 한 줄씩 읽으니까

#include<stdio.h>
int main() {
	int a[101], b[101], i, j, n, A = 0, B = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 1; i <= n; i++) {
		scanf("%d", &b[i]);
	}
	for (i = 1; i <= n; i++) {
		if (a[i] == b[i]) printf("D\n");
		else if (a[i] == 1 && b[i] == 3) printf("A\n");
		else if (a[i] == 2 && b[i] == 1) printf("A\n");
		else if (a[i] == 3 && b[i] == 2) printf("A\n");
		else printf("B\n");
	}
	return 0;
}