

//Not:öğrencilerin bilgilerini yazdırmak için uygulamadan çıkı(7 ye basılmalıdır)!!!!

//Not:önce 1 e basılır ardından 2 ye basılır bilgiler girildikten sonra isleme devam edilir

//örneğin 1 e basıp sayiyi girdim 2 ye basıp bilgileri girdim 3 e bastım ögrencilerin bilgilerini yazdırdım
//ve en son olarak 7 ye basarak çıkış yaptım

#include <stdio.h>

void anamenu() {
    printf("* 1) 1 ile 5 arasi ogrenci sayisini giriniz                *\n");
    printf("* 2) ogrenci bilgilerini giriniz                           *\n");
    printf("* 3) Butun ogrencilerin bilgilerini goster                 *\n");
    printf("* 4) Kac numarali ogrenciyi gormek istersiniz              *\n");
    printf("* 5) Bir deger gir ve bu degerde ogrenci var mi kontrol et *\n");
    printf("* 6)            ogrenci bilgilerini duzenle                *\n");
    printf("* 7)                  cikis                                *\n");
}

int main() {
    int islem;
    int yas[150];
    int numara[150];
    char ad[150][50];
    char cinsiyet[150][10];
    char ulke[150][20];
    int sayi = 0; 
    int ogrenci;
    int kontrolDeger;
    int degistirme;
    int ogrenciSayisi = 0; 

    FILE *app = fopen("dosya.txt", "w"); // Open file in append mode

    if (app == NULL) {
        printf("Dosya acilamadi.\n");
        return 1; // Return an error code
    }

    do {
        anamenu();
        printf("Bir islem secin: ");
        scanf("%d", &islem);

        switch (islem) {
            case 1:
                printf("1 ile 5 arasinda tam sayi giriniz: ");
                scanf("%d", &sayi);
                break;

            case 2:
                for (int j = ogrenciSayisi; j < ogrenciSayisi + sayi; j++) {
                    printf("Isminizi giriniz: ");
                    scanf("%s", ad[j]);

                    printf("Yasinizi giriniz: ");
                    scanf("%d", &yas[j]);

                    printf("Cinsiyetinizi giriniz: ");
                    scanf("%s", cinsiyet[j]);

                    printf("ulkenizi giriniz: ");
                    scanf("%s", ulke[j]);

                    printf("Numaranizi giriniz: ");
                    scanf("%d", &numara[j]);
                }
                ogrenciSayisi += sayi;
                break;

            case 3:
                for (int i = 0; i < ogrenciSayisi; i++) {
                    fprintf(app, "İsminiz: %s\n", ad[i]);
                    fprintf(app, "Yasiniz: %d\n", yas[i]);
                    fprintf(app, "Cinsiyetiniz: %s\n", cinsiyet[i]);
                    fprintf(app, "Ulkeniz: %s\n", ulke[i]);
                    fprintf(app, "Numaraniz: %d\n", numara[i]);
                }
                break;

            case 4:
                printf("Hangi ogrenciyi gormek istersiniz: ");
                scanf("%d", &ogrenci);

                if (ogrenci >= 1 && ogrenci <= ogrenciSayisi) {
                    printf("Isminiz: %s\n", ad[ogrenci - 1]);
                    printf("Yasiniz: %d\n", yas[ogrenci - 1]);
                    printf("Cinsiyetiniz: %s\n", cinsiyet[ogrenci - 1]);
                    printf("Ülkeniz: %s\n", ulke[ogrenci - 1]);
                    printf("Numaraniz: %d\n", numara[ogrenci - 1]);
                } else {
                    printf("Gecersiz ogrenci numarasi.\n");
                }
                break;

            case 5:
                printf("Bir deger girin: ");
                scanf("%d", &kontrolDeger);
                int found = 0;
                for (int i = 0; i < ogrenciSayisi; i++) {
                    if (kontrolDeger == numara[i]) {
                        printf("Ogrenci bulundu:\n");
                        printf("Isminiz: %s\n", ad[i]);
                        printf("Yasiniz: %d\n", yas[i]);
                        printf("Cinsiyetiniz: %s\n", cinsiyet[i]);
                        printf("Ulkeniz: %s\n", ulke[i]);
                        printf("Numaraniz: %d\n", numara[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Girilen degerde bir ogrenci bulunamadi.\n");
                }
                break;

            case 6:
                printf("Hangi ogrenciyi degistirmek istersiniz: ");
                scanf("%d", &degistirme);

                if (degistirme >= 1 && degistirme <= ogrenciSayisi) {
                    printf("Isminizi giriniz: ");
                    scanf("%s", ad[degistirme - 1]);

                    printf("Yasinizi giriniz: ");
                    scanf("%d", &yas[degistirme - 1]);

                    printf("Cinsiyetinizi giriniz: ");
                    scanf("%s", cinsiyet[degistirme - 1]);

                    printf("ulkenizi giriniz: ");
                    scanf("%s", ulke[degistirme - 1]);

                    printf("Numaranizi giriniz: ");
                    scanf("%d", &numara[degistirme - 1]);

                } else {
                    printf("Gecersiz ogrenci numarasi.\n");
                }
                break;

            case 7:
                break;

            default:
                printf("Gecersiz islem numarasi. Tekrar deneyin.\n");
        }

    } while (islem != 7);

    fclose(app);

    return 0;
}