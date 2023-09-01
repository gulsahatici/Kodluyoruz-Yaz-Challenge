#include<stdio.h>
#include<stdlib.h>
int main(){
	int dizi[]={10,15,34,40,12};
	int a,b,sonuc;
	printf("0-4 arasinda toplamak istediginiz sayinin numarasini seciniz.");
	scanf("%d",&a);
	printf("0-4 arasinda toplamak istediginiz diger sayinin numarasini seciniz.");
	scanf("%d",&b);
	sonuc=dizi[a]+dizi[b];
	printf("Sectiginiz sayilarin toplami %d",sonuc);
	
	return 0;
}
