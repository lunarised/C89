#include <stdio.h>
#include <stdlib.h>

int main(void){
double score1;
double score2;
double score3;
int return_code;
printf("Howdy You will now be asked to input the 3 scores\n");
printf("Score 1: ");
fflush(stdout);
return_code = scanf("%lg", &score1);

if(return_code != 1){
	return EXIT_FAILURE;
}
printf("Score 1 submitted succesfully\n");
printf("Score 2: ");
fflush(stdout);
return_code = scanf("%lg", &score2);

if (return_code != 1){
	return EXIT_FAILURE;
}

printf("Score 2 submitted succesfully\n");
printf("Score 3: ");
fflush(stdout);
return_code = scanf("%lg", &score3);

if (return_code != 1){
	return EXIT_FAILURE;
}

printf("Your scores were %f, %f, %f\n", score1, score2, score3);


return 0;
}

