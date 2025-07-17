#include <stdio.h>
#include <math.h>

int main() {
	double X[200] = {1};
	int k,N = 15;

	printf("   N%10sX[N]\n", " ");
	for (k=0; k <= N; k++) {
		printf("%4d%4s%17.91f\n",k," ", X[k]);
		X[k+1] = 0.25 + sin(X[k]);
	}
}
