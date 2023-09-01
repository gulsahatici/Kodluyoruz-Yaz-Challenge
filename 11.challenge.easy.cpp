#include<stdio.h>
#include<stdlib.h>
int main(){
	int faktor=1, sayi;
	printf("faktoriyeli alinacak sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	for(int i=1;i<=sayi;i++)
	{
		faktor=faktor*i;
	}
	printf("5 sayisinin faktoriyeli: %d",faktor);
	
	return 0;
}
