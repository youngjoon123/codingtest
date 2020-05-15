#include <iostream>
#include <stdio.h>
int digit_sum(int x);

int main() {
	int N, n_num, max=0 , sum, res;

	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf_s("%d", &n_num);
		sum = digit_sum(n_num);
		if (max < sum) {
			max = sum;
			res = n_num;
		}
		else if(sum == max) {
			if (n_num > res) res = n_num;
		}
	}
	printf("%d", res);
	return 0;
}

int digit_sum(int x) {
	int sum=0;

	while (x>0) {
		sum = sum + (x % 10);
		x = x / 10;
	}
	return sum;
	}
