#include <stdio.h>
#include <iostream>
int a[60];
int b[60]; //카운트 하는거 전역변수로

int main() {
	char x[101];

	scanf_s("%s", &x);
	for (int i = 0; x[i] != '\0'; i++) {
		if (x[i] >= 65 && x[i] <= 90) { //(1~26)
			a[x[i] - 64]++;
		}

		else {//(27~52)
			a[x[i] - 70]++;
		}
	}

	scanf_s("%s", &x);
	for (int i = 0; x[i] != '\0'; i++) {

		if (x[i] >= 65 && x[i] <= 90) { //(1~26)
			b[x[i] - 64]++;
		}

		else {//(27~52)
			b[x[i] - 70]++;
		}
	}

	for (int i = 1; i <= 52; i++) {
		if (a[i] != b[i]) {
			//printf("%d %d %d",i, a[i], b[i]);
			printf("NO\n");
			exit(0);
		}
	}
	printf("YES\n");

	return 0;
}