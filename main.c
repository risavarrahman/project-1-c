#include <stdio.h>
#include <stdlib.h>

int main(void){

    int angka, hasil;
    
    printf("Masukan bilangan : \n ");
    scanf("%d", &angka);
    hasil = 0;
    while(angka > 0 ) {
    	hasil = angka%10;
    	printf("%d", hasil);
    	angka = angka - hasil;
    	angka = angka/10;
	}
	
return 0;

}

