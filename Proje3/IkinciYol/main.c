#include<conio.h>
#include<locale.h> //Türkçe karakterler için özel kütüphane
int main (void){
 setlocale(LC_ALL,"TURKISH"); //Türkçe karakter kullanımı
 int i,j,k;
 int sayi=3; // 3 sıra kayması
 char a[100]; //girilebilecek max metin uzunluğu
 char x[29] = {'a','b','c','ç','d','e','f','g','ğ','h','i','ı','j','k','l','m','n','o','ö','p','r','s','ş','t','u','ü','v','y','z'};
 printf("Sifrelenecek yazıyı giriniz : ");
 while((a[k] = getchar())!='\n') //boşluk karakteri için özel durum
       k++ ;
for(i=0;i<k;i++)      // Girilen metnin karakteri kadar bu işlemi gerçekleştir
{
 for(j=0;j<29;j++){  //elimizde olan harfler
 if(a[i]==x[j]){
  j=j+sayi;          // harfleri 3 kaydir
  j=j % 29;
  a[i]=x[j];         //Girilen metindeki harfler ile 3 ötelenmiş harfi değiştir
  break;
 }
    }
}
 printf("%s",a);     //Sifrelenmis metin
       getch();
       return 0;
}
