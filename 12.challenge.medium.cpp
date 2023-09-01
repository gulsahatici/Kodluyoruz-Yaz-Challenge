#include<stdio.h>
#include<stdlib.h>
int main(){
	int tavuk,koyun;
	int toplamhayvan=36,toplambacak=100;
	for(tavuk=0;tavuk<=toplamhayvan;tavuk++){
		koyun=toplamhayvan-tavuk;
		if((tavuk*2)+(koyun*4)==toplambacak){
			printf("tavuk sayisi: %d",tavuk);
			printf("koyun sayisi: %d",koyun);
			break;
		}
	}
	
	return 0;
}
