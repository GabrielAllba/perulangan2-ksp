#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, m, a[100][100];
	
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]);
			printf("\n%d, %d", i, j);
		}
	}
	
	for(int i=n-1; i>=0; i--){
		for(int j=m-1; j>=0; j--){
			printf("&d ", a[i][j]);
		}
		printf("\n");
	}
}
