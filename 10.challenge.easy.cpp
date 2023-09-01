#include <stdio.h>
int main(){
     int sayilar[3]={12,2,8};
	 int max;


     max = sayilar[0];

     for(int i=0 ; i<3 ; i++){
          if(max < sayilar[i])
               max = sayilar[i]; 

     }

     printf("Dizideki en buyuk sayi : %d \n", max);
     
     
     return 0;
 }
