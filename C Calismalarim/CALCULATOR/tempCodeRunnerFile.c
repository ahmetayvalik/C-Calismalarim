#include <stdio.h>

void Goster() {
    printf("*********\n");
    printf("* Islem Secenekleri:     *\n");
    printf("* 1. Topla               *\n");
    printf("* 2. Carp                *\n");
    printf("* 3. Bol                 *\n");
    printf("* 4. Yeni sayilar gir    *\n");
    printf("* 5. bitir               *\n");
    printf("*********\n");
}

double topla(double sayi1, double sayi2) {
    return sayi1 + sayi2;}
    double carp(double sayi1, double sayi2) {
return sayi1 * sayi2;
}
double bol(double sayi1, double sayi2) {
    if (sayi2 != 0) {
        return sayi1 / sayi2;
    } else {
        printf("Hata! Bolme islemi icin ikinci sayi sifir olamaz.\n");
        return 0.0;
    }
}
int main() {
    int secim;
    double sayi1, sayi2, sonuc;

    do {
        printf("Birinci sayiyi girin: ");
        scanf("%lf", &sayi1);

        printf("Ikinci sayiyi girin: ");
        scanf("%lf", &sayi2);

        Goster();

        printf("Seciminizi yapin (1-5): ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                sonuc = topla(sayi1, sayi2);
                printf("Sonuc: %.2lf\n", sonuc);
                break;
            case 2:
                sonuc = carp(sayi1, sayi2);
                printf("Sonuc: %.2lf\n", sonuc);
                break;
            case 3:
                sonuc = bol(sayi1, sayi2);
                printf("Sonuc: %.2lf\n", sonuc);
                break;
            case 4:

                break;
            case 5:
                printf("Programdan cikiliyor.\n");
                break;
            default:
                printf("Gecersiz secim! Lutfen gecerli bir secim yapin (1-5).\n");
        }

    } while (secim != 5);

    return 0;
}
