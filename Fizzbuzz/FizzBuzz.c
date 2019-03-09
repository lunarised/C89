#include <stdio.h>
#include <stdlib.h>
int main(void){
int i = 1;
int max = 2048;
for (i=1;i<=max;i++){
	if (i%3 == 0){
		if (i%5 == 0){
			printf("Fizzbuzz\n");
		}else{
			printf("Fizz\n");
		}
	}else{
		if (i%5 == 0){
			printf("Buzz\n");
		}else{
			printf("%d\n", i);
		}
	}
}
return EXIT_SUCCESS;
}
