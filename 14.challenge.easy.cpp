#include<stdio.h>
#include<stdlib.h>
int main(){
	int sayi,kontrol=0;
	printf("Kontrol etmek istediginiz sayiyi giriniz: ");
	scanf("%d",&sayi);
	for(int i=2;i<sayi;i++){
		if(sayi %i ==0){
			kontrol++;
		}
	}
	if(kontrol==1)
		printf("girdiginiz sayi asal degil");
	else 
	    printf("girdiginiz sayi asal");
	
	return 0;
}
