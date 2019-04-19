#include <stdio.h>
#include <stdlib.h>

int is_prime(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i == 0){
			return 0;
		}	
	}
	return 1;
}
int main(void){
	int n = 2;
	for (n = 2; n < 100; n++){
		if(is_prime(n)){
			printf("%d\n", n);
		}
	}
	return EXIT_SUCCESS;
}	 
