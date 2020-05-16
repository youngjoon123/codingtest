#include <stdio.h>

int main() {

	int n,num,sol;
	int a[11] = {}, b[11] = {};
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf_s("%d %d", &num, &sol);
		a[i] = num;
		b[i] = sol;
	}

	for (int i = 1; i <= n; i++) {
		int sum = 0;

		for (int j = 1; j <= a[i]; j++) {
			sum = j + sum;
		}

		if (sum == b[i]) {
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
} //내 풀이

#include<stdio.h>
int main(){
	//freopen("input.txt", "rt", stdin);
	int n, sum=0, i, j, m, ans;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d %d", &m, &ans);     //FOR문안에 입력 한번에 받으니까 이렇게 만들어도 됨
		sum=0;
		for(j=1; j<=m; j++){
			sum+=j;
		}
		if(ans==sum) printf("YES\n");
		else printf("NO\n");
	}	
	return 0;
}  //선생님 풀이

