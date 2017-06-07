#include <stdio.h>

int main(void){
	int x, n, result;

	printf("Enter Number:");
	scanf("%d", &x);

	result = 0; // =0 は偽
	n = 2;
	while(n <= x / 2){
		if(x % n == 0){
			result = 1; // ≠0 は真
		}
		n++;
	}
	if(result == 1){
		printf("Not sosuu\n");
	}else{
		printf("sosuu\n");
	}
	return 0;
}