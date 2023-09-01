#include <stdio.h>
#include<stdlib.h>

int main(){
	int sayi1,sayi2,toplam;
     
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi1);
	
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2;
	printf("Girdiginiz sayilarin toplami %d",toplam);
	
	return 0;
}
