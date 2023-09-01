#include <stdio.h>

int main(){
	int sayi;
     
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
 
	if(sayi%2 == 0)
		printf("%d sayisi cifttir.", sayi);
	else
		printf("%d sayisi tektir.", sayi);
		
    return 0;
}
