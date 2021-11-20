#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	int input;
	printf("Input tinggi segitiga: ");scanf("%d", &input);
	/*
		1 2 3 4 5
		
	1	X X X X X
	2	0 X X X X
	3	0 0 X X X
	4	0 0 0 X X
	5	0 0 0 0 X
	
	*/
	for(int i = 1; i <= input; i++){
		for(int j = 1; j <= input; j++){
			if(j - i < 0){
				printf(" ");
			}
			else{
				printf("*");
			}
			
		}
		printf("\n");
	}
	
	return 0;
}

