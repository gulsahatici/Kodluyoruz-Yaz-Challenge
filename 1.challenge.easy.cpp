#include <stdio.h>

int main() {
    int kirmizi = 5;
    int yesil = 4;
    int mavi = 3;
    int toplam = kirmizi + yesil + mavi;

    float aynirenk = 0.0;

    for (int i = 0; i < 3; i++) { 
        
        int ilkrenksayisi = 0;

        if (i == 0) {
            ilkrenksayisi = kirmizi;
        } else if (i == 1) {
            ilkrenksayisi = yesil;
        } else {
            ilkrenksayisi = mavi;
        }

        
        float ikincirenkolasiligi = (float)(ilkrenksayisi - 1) / (toplam - 1);

        
        aynirenk += ((float)ilkrenksayisi / toplam) * ikincirenkolasiligi;
    }

    printf("Iki topun ayni renk olma olasiligi: %f\n", aynirenk);

    return 0;
}
