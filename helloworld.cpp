#include <stdio.h>
#define MAX 1000    
int Max1(int M[], int N) {
	int now, max = 0;
	int a, b;

	for (a = 0; a < N; a++) {    //i���������λ�á�
		now = 0;    //A[i]~A[j]�����к͡�
		for (b = a; b < N; b++) {    //j�������Ҷ�λ�á�
			now += M[b];    //������ͬ��i����ͬ��j��ֻҪ��j-1�����ۼ�1��ɡ�
			if (now > max)    //����MaxSum.
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
