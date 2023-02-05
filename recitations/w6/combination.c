#include <stdio.h>


int comb(int n, int r){
	int nr = n -r;
	
	int first = nr < r ? nr : r;
	int second = nr < r ? r: nr;
	
	int f1 = 1;
	
	for (int i = 2; i<=first; i++) {
		f1 *= i;
	}
	
	int f2 = f1;
	for (int i = first +1; i<=second; i++) {
		f2 *= i;
	}
	
	int fac_n = f2;
	for (int i = second +1; i<=n; i++){
		fac_n *= i;
	}
	
	int comb = fac_n / (f1 * f2);
	return comb;
}


int main() {
	int n = 0;
	int r = 0;
	printf("Enter n and r: ");
	scanf("%d %d", &n, &r);
	
	int nCr = comb(n,r);
	
	printf("%d\n", nCr);
	
	return 0;
}