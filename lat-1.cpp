#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
typedef char string[50];

int main(int argc, char*argv[]){
	int jumlahBelanja, ongkosKirim, totalBayar;
	jumlahBelanja = 50;

	if(jumlahBelanja < 70){
		ongkosKirim = 10;
	};
	   
	else if (jumlahBelanja >= 40){
		ongkosKirim = 5;
	};
	   
	else{
		ongkosKirim = 0;
	};
	   
	
	totalBayar = jumlahBelanja+ongkosKirim;
	printf("%d", totalBayar);
}
