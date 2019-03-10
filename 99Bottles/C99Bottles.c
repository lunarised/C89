#include <stdio.h>
#include <stdlib.h>
int rMethod(int _bottle){
	if(_bottle > 2){
		printf("%d bottles of beer on the wall!\n", _bottle);
		printf("%d bottles of beer!\n", _bottle);
		printf("You take one down, and pass it around!\n");
		_bottle--;
		printf("%d bottles of beer on the wall!\n", _bottle);
		printf("\n");
		rMethod(_bottle);
	}
	else if (_bottle == 2){	
		printf("%d bottles of beer on the wall!\n", _bottle);
		printf("%d bottles of beer!\n", _bottle);
		printf("Take it down, and pass it around!\n");
		_bottle--;
		printf("%d more bottle of beer on the wall!\n", _bottle);
	}
	else if (_bottle == 1){	
		printf("%d more bottle of beer on the wall!\n", _bottle);
		printf("%d more bottle of beer!\n", _bottle);
		printf("Take it down, and pass it around!\n");
		_bottle--;
		printf("No more bottles of beer on the wall!\n");
	}
	else if (_bottle <= 0){
		return EXIT_SUCCESS;
	}
	return EXIT_FAILURE;	
}
int main(void){
	rMethod(10);
	return EXIT_SUCCESS;
}
