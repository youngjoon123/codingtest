#include <stdio.h>
#include <iostream>

int reverse(int x);
bool isPrime(int x);

int main() {
	int n,num,re_num;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &num);

		re_num =reverse(num);

		if (isPrime(re_num)) {
			printf("%d ", re_num);
		}
	}

	return 0;

}

int reverse(int x) {
	int res = 0, tmp;

	while(x>0){
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return res;
}

bool isPrime(int x) {
//소수 판단
	if (x == 1) { return false; }
	bool flag = true;

	for (int i = 2; i < x; i++) {
		if (x % i == 0) { flag = false; break; }
	}
	return flag;
}