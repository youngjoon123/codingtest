#include <iostream>
using namespace std;

int main() {

	int a, b ,sum=0;

	cin >> a >> b;

	for (int a; a < b; a++) {
		sum += a;
		cout << a<<'+';
	}
	sum += b;
	cout << b<<'='<<sum;
}