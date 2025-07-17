#include <stdio.h>
int main() {
	double X[200] = {.4};
	int k,N = 15;

	printf("   N%10sX[N]\n", " ");
	for (k=0; k <= N; k++) {
		printf("%4d%4s%17.91f\n",k," ", X[k]);
		X[k+1] = X[k]/2 + 1/X[k];
	}
}
