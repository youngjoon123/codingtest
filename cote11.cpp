#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int n,i,count=0,tmp;

	scanf_s("%d", &n);

	for (i=0; i <= n; i++) {
		tmp = i;
		while(tmp > 0) {
			tmp = tmp / 10;
			count++;
		}
	}
	printf("%d", count);
	return 0;
}