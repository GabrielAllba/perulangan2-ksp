#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char string[50];



int main(int argc, char *argv[]) {
	int menu;
	
	do{
		system("cls");
		system("color 70");
		printf("\n\t[1]. Input Data");
		printf("\n\t[2]. Tampil Data");
		printf("\n\t[3]. Hapus Data");
		printf("\n\t[0]. Exit");
		printf(">> ");scanf("%d",&menu);
		
		switch(menu){
			case 1:
				break;
				
			case 2:
				break;
				
			case 3:
				break;
				
		}getch();
	
	}while(menu!=0);
	return 0;
}
