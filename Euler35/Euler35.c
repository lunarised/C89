#include <stdio.h>
int main(void){
int i = 0;
int sum = 0;
int max = 15;
for (i=1;i<=max;i++){
	if (i%3 == 0 || i%5 == 0){
	sum = sum + i;
	}
}
printf("%d\n", sum);
return 1;
}
