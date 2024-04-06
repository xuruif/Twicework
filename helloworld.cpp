#include <stdio.h>
#define MAX 1000    
int Max1(int M[], int N) {
	int now, max = 0;
	int a, b;

	for (a = 0; a < N; a++) {    //i是子列左端位置。
		now = 0;    //A[i]~A[j]的子列和。
		for (b = a; b < N; b++) {    //j是子列右端位置。
			now += M[b];    //对于相同的i，不同的j，只要在j-1处再累加1项即可。
			if (now > max)    //更新MaxSum.
				max = now;
		}
	}

	return max;
}
int main(void) {
	int K, i;
	int a[MAX] = { 0 };

	scanf_s("%d", &K);
	for (i = 0; i < K; i++)
		scanf_s("%d", &a[i]);
	printf("%d", Max1(a, K));
	return 0;
}
