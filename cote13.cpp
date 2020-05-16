#include <stdio.h>

int main() {
	
	int ch[10];
	int a[100];
	int max=0, x, res;
	scanf("&s", &a);

	for (int i = 0; a[i] != '\0'; i++) {
		x = a[i] - 48;
		ch[x]++;
	}

	for (int j = 0; j < 10; j++) {
		if (ch[j] > max) {
			max = ch[j];
			res = j;
		}
	}
	printf("%d\n", res);
	return 0;
}