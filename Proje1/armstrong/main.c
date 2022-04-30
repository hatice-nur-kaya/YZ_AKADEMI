#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
printf("\n");
printf("****ARMSTRONG KONTROLU**** \n \n");
int sayi, basamak=0, toplam=0;
printf("Sayiyi giriniz: "); //kullanýcýdan
scanf("%d",&sayi);

int temp=sayi;
int temp2=sayi;
while(temp>0){  //basamak sayisi hesaplama
temp/=10;
basamak++;
}
while(temp2>0){  //Basamak degeri hesaplama
int basamak_degeri = temp2 % 10;
temp2 /= 10;
int us = pow(basamak_degeri,basamak); //basamak degerini küp olarak hesaplama basamak sayısına kadar
toplam += us;  //usleri toplama
}
//toplam sonucunu sayi ile karsilastirma
if (sayi == toplam) {
printf("Girilen sayi  Armstrong sayidir",sayi);
}
else {
printf("Girilen sayi Armstrong degildir",sayi);
}
}
