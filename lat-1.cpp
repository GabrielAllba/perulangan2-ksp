#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef char string[50];

int main(int argc, char*argv[]){
	int option, i, t, h;
	string name, npm, angkatan, ipk;
	do{
		system("cls");
		printf("\n[1]. Input Data");
		printf("\n[2]. Tampil Data");
		printf("\n[3]. Hapus Data");
		printf("\n[0].  Exit >>");scanf("%d", &option);
		
		switch(option){
			case 1:
				do{
					printf("Masukkan nama : ");fflush(stdin);gets(name);
					if(strlen(name) == 0){
						printf("nama tidak boleh kosong!\n");
					}
				}while(strlen(name) == 0);
				
				do{
					printf("Masukkan NPM : ");fflush(stdin);gets(npm);
					if(strlen(npm) == 0){
						printf("npm tidak boleh kosong!\n");
					}
				}while(strlen(npm) == 0);
				
				do{
					printf("Angkatan berapa bray : ");fflush(stdin);gets(angkatan);
					if(strlen(angkatan) == 0){
						printf("angkatan tidak boleh kosong!\n");
					}
				}while(strlen(angkatan) == 0);
				
				do{
					printf("Masukkan IPK : ");fflush(stdin);gets(ipk);
					if(strlen(ipk) == 0){
						printf("ipk tidak boleh kosong!\n");
					}
					
				}while(strlen(ipk) == 0);
					printf("berhasil input data!makasih\n");
					break;
			case 2:
				if(strlen(name) == 0 || strlen(angkatan) == 0 || strlen(ipk) == 0 || strlen(npm) == 0){
					printf("belum menginputkan data! pilih menu 1 dulu!\n");
					break;
				}
				printf("Nama\t: %s\n", name);
				printf("NPM\t: %s\n", npm);
				printf("Angkatan: %s\n", angkatan);
				printf("IPK\t: %s\n", ipk);
				break;
			case 3:
				for(int i = 0; i < strlen(name); i++){
					name[i] = '\0';
					npm[i] = '\0';
					angkatan[i] = '\0';
					ipk[i] = '\0';
				}
			
				printf("data berhasil direset!\n");
				break;
		}getch();
	}while(option!= 0);
}
