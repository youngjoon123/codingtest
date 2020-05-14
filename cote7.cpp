#include <iostream>

int main() {

	int i,cnt=0;

	char a[100];
	scanf("%s", &a);
	
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') cnt++;
		else if(a[i] == ')') cnt--;
		if (cnt < 0) break;
	}
	//printf("%d", cnt);
	if (cnt == 0) printf("YES");
	else printf("NO");

	return 0;

}