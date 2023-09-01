#include <stdio.h>
int main(){
     int sayilar[3]={12,2,8};
	 int max, min;


     max = sayilar[0];
     min = sayilar[0];

     for(int i=0 ; i<3 ; i++){
          if(max < sayilar[i])
               max = sayilar[i]; 

          if(min > sayilar[i])
               min = sayilar[i]; 
     }

     printf("Dizideki en buyuk sayi : %d \n", max);
     printf("Dizideki en kucuk sayi : %d", min);
 }
