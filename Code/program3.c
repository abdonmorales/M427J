#include <stdio.h>
#include <math.h>

int main() {
	double a,d,V[200] = {45.7};
	double c = 0.08, g = 32.2, W = 527.436, B = 470.327;
	int k, N = 15;
	
	a = (W-B)/c;
	d = 300 * c * g/W;
	printf("   N%10sX[N]\n", " ");
	for (k = 0; k <= N; k++) {
		printf("%4d%4s%17.91f\n",k," ", V[k]);
		V[k+1] = V[k] + ((a-V[k]/V[k]) * (V[k] + d + a * log(1-(V[k]/a))));
	}
}
