#include <stdio.h>

int main(void){
	int n[100], i, x, result;

	for(i = 1; i < 100; i++){
		n[i] = i;

	result = 0;
	x = 2;
	while(x <= n[i] / 2){
		if(n[i] % x == 0){
			result = 1;
		}
		x++;
	}
	
	if(result == 0){
		printf(" %d\n", n[i]);
	}
	}
	return 0;
}

/* 実行結果
 1
 2
 3
 5
 7
 11
 13
 17
 19
 23
 29
 31
 37
 41
 43
 47
 53
 59
 61
 67
 71
 73
 79
 83
 89
 97
[Finished in 0.5s]
 */