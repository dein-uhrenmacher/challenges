#include <stdio.h>
#include <stdlib.h>

int main(){
	srand(time(NULL));
	int r = rand();
	if(r%2 == 0){
		printf("...ehm...head \n");
	}else{
		printf("lemme take a look...tail \n");
	}
	return 0;
}
