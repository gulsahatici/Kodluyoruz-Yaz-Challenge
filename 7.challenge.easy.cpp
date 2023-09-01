#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100]; 

    printf("Bir kelime girin: ");
    scanf("%s", kelime); 

    int uzunluk = strlen(kelime); 

    printf("Kelimenin uzunlugu: %d\n", uzunluk);

    return 0;
}
