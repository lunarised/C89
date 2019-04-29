#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int is_prime(int n){
	int i;
	for(i=3; i<((n/2)+1);i++){
		if(n%i == 0){
			return 0;
		}	
	i++;
	}
	return 1;
}
int main(void){
	clock_t se, ss;
	int n = 2;
	ss = clock();
	for (n = 2; n < 100000; n++){
		if(is_prime(n)){
			printf("%d\n", n);
		}
	}
	se = clock();
	printf("Operation Time: %f\n", (se - ss)/(double)CLOCKS_PER_SEC);
	return EXIT_SUCCESS;
}
