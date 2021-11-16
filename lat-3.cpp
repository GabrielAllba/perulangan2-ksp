#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j, n;
	char alphabet = 'A';
	printf("input tinggi segitiga: ");scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			if(j <= i){
				if(alphabet>'Z'){
					alphabet = 'A';
				}
				printf("%c",alphabet++);
			}
			else{
				printf(" ");
				
			}
		}
		printf("\n");
	}
	return 0;
}

