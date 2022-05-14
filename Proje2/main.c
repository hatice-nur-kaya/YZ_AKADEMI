#include <stdio.h>

int main()
{
    long sayi1, sayi2; // Binary deðerler uzun olduðu için long veri tipi seçildi
    int i = 0, kalan = 0, toplam[20]; //toplam sonucu bir diziye atýldý her index ile iþlem yapabilmek için

    printf("Birinci Sayiyi Giriniz: ");
    scanf("%ld", &sayi1);
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%ld", &sayi2);
    while (sayi1 != 0 || sayi2 != 0) //sayýlar 0 deðilse
    {
        toplam[i++] =(sayi1 % 10 + sayi2 % 10 + kalan) % 2; //Kalanlarý alarak bunu diziye aktardýk
        kalan =(sayi1 % 10 + sayi2 % 10 + kalan) / 2; // iki sayýnýn kalanlarýný kalana atadýk
        sayi1 = sayi1 / 10;
        sayi2 = sayi2 / 10;
    }
    if (kalan != 0)  //kalan sýfýr deðilse sayý indexsine ekle
        toplam[i++] = kalan;
    --i;
    printf("Toplam Sonucunuz : ");
    while (i >= 0)
        printf("%d", toplam[i--]);
    return 0;
}
