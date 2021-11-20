#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char *argv[]){
	
	/*
		1 2 3 4 5
		
	1	0 0 X 0 0
	2	0 X X X 0
	3	X X X X X
	*/
	int input;

	printf("input tinggi diamond: ");scanf("%d", &input);
	if(input % 2 == 0){
		printf("tinggi diamon harus ganjil\n");
		return 0;
	}
	for(int i = 1; i <= input; i++){
		for(int j = 1; j <= input; j++){
			if(i> (input/2) + 1){
				if(j>(input/2) + 1){
					if(i+j < input + (input/2 + 2)){
						printf("*");
					}
					else{
						printf(" ");
					}
				}
				else{
					if(i-j < (input/2 + 1)){
					printf("*");
					}
					else{
						printf(" ");
					}
					
				}
			}
			else{
				if(j > input/2 + 1){
					if(j-i< input/2 + 1){
						printf("*");
					}
					else{
						printf(" ");
					}
				}
				else{
					if(i+j > input/2 + 1){
						printf("*");
					}
					else{
						printf(" ");
					
					}
				}
			}
	}
	printf("\n");
	}
}


