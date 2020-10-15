#include<stdio.h>
#include<iostream>
using namespace std;

long long GiaiThua(int n) {
	if (n == 0) return 1;
	return n*GiaiThua(n - 1);
}
int main() {
	int n;
	do {
		printf_s("Nhap so n can tinh (0<=n<=20): ");
		scanf_s("%d", &n);
	}
	while (n < 0 || n > 20); 

	cout << "Ket qua:" << GiaiThua(n);
	return 0;
}