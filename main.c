#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int aranan, i, N;
    printf("LINEAR SEARCH ALGORITHM\n");
    printf("Kac adet sayi uretilecek: ");
    scanf("%d", &N);
    int dizi[N];
    srand(time(0));
    printf("Dizi elemanlari :\n");
    for (i = 0; i < N; i++) {
        dizi[i] = rand() % 100;
        printf("%d ", dizi[i]);
    }
    printf("\nAranan Sayiyi Giriniz: ");
    scanf("%d", &aranan);

    for (i = 0; i < N; i++) {
        if (dizi[i] == aranan) {
            printf("%d sayisi %d. sirada bulundu.\n", aranan, i+1);
            break;
        }
    }
    if(i==N)
        printf("Bulunamadi.\n", aranan);

    return 0;
}
