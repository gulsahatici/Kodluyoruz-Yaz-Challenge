#include <stdio.h>

int main(){
     int dizi[5] = {10, 12, 25, 30, 36}, toplam = 0;
     float sonuc;

     for(int i=0 ; i<5 ; i++){
          toplam = toplam + dizi[i]; 
     }
     sonuc=toplam/5;
     printf("Dizideki elemanlarin ortalamasi : %.2f", sonuc);
     
     return 0;
}
