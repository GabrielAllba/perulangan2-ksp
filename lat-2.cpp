#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char string[50];

int main(int argc, char*argv[]){
	int input;
	printf("Input jumlah baris: ");scanf("%d", &input);
	for(int i = 1; i <= 10; i++){
		for(int j = 1; j <= input; j++){
			int hasil = i*j;
			printf("%d x %d = %d	", j,i,hasil);
			
		}
		printf("\n");
	}
}
