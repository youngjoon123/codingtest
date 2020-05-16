#include<stdio.h>
int main() {

	int n, sum = 0, cnt = 1, digit = 9, res = 0;
	scanf("%d", &n);
	while (sum + digit < n) {
		sum = sum + digit;
		res = res + (cnt*digit);
		cnt++;
		digit = digit * 10;
	}
	res = res + ((n - sum)*cnt);
	printf("%d\n", res);
	return 0;
}

/* #include <stdio.h>
using namespace std;

int main() {
	int n,digit=9,sum,result=0,count=1,end;

	scanf("%d", &n);

	while (digit + sum < n) {

		if (n > digit) {
			result = result + digit*count;
			count++;
		}
		else if (n < 10) {
			end = n;
			break;
		}
		else {
			sum = (n - digit)*count;
		}
		digit = digit+(digit * 10);
		end=res
	}
}*/