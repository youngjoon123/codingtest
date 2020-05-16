//  1. 배수를 소수 판단에 제외해서 효율을 높히자. ->에라토스테네스의 체

//  2. 제곱근까지 배수 확인 36(i) 까지 확인 X sqrt(36)까지 확인 O

#include <stdio.h>
#include <math.h>

int main() {

	int n, count = 0, flag;
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++) {
		flag = 1;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) { flag = 0; break; }
		}
		if(flag==1) count++;
	}

	printf("%d", count);
	return 0;
}