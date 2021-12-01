#include<stdio.h>
int isPrime();
int main() {
	if (isPrime() == 1)
		printf("Not Prime number");
	else printf("Prime number");
}
int isPrime()
{
	int a;
	int k = 2;
	int n;
	scanf_s("%d", &a);
	n = a;
	while (a > 1) {
		while (a % k == 0) {
			a /= k;

		}
		k++;
	}
	if (n == 1 || n > k)
		return 1;
	else return 0;
}

