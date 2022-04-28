#include <stdlib.h>
#include <stdio.h>
int main()
{
    int diziBuyuklugu,ballEnergy,newEnergy,deltaPozitif=0,counter=0,minBallEnergy=0;
    //Döngü yaparak kullanýcýdan dizi deðerleri alýrýz.
    printf("Kac adet lego boyutu gireceksiniz?");
    scanf("%d",&diziBuyuklugu);
    int dizi[diziBuyuklugu];
    for(int i=0;i<diziBuyuklugu;i++)
    {
        printf("%d . lego boyutunu giriniz.",i+1);
        scanf("%d",&dizi[i]);
    }

        for(int x=0;x<99;x++){

            if(ballEnergy<0){
                counter=0;
                deltaPozitif=0;

            }
            ballEnergy=x;

                for(int j=0;j<diziBuyuklugu;j++){

                if(counter==diziBuyuklugu){
                    break;
                }

                    if(ballEnergy>=dizi[j]&&ballEnergy>=0){

                            deltaPozitif=deltaPozitif+(ballEnergy-dizi[j]);
                            ballEnergy=ballEnergy+(ballEnergy-dizi[j]);
                            counter++;

                        if(counter==diziBuyuklugu){

                                printf("Oyun sonu Ball Energy'niz : %d\n",ballEnergy);
                                printf("Oyun sonu Toplam Delta Degeri'niz : %d\n",deltaPozitif);
                                minBallEnergy=ballEnergy-deltaPozitif;
                                printf("Minimum Ball Energy Degeri : %d\n ",minBallEnergy);
                                break;
                        }

                    }

                    else if(ballEnergy>0&&ballEnergy<dizi[j]){
                            if(ballEnergy<dizi[j]&&ballEnergy>=0){

                                deltaPozitif=deltaPozitif+(ballEnergy-dizi[j]);
                                ballEnergy=ballEnergy+(ballEnergy-dizi[j]);

                                    if(ballEnergy>=0){
                                        counter++;

                                    }
                                        if(counter==diziBuyuklugu){

                                        printf("Oyun sonu Ball Energy'niz : %d\n",ballEnergy);
                                        printf("Oyun sonu Toplam Delta Degeri'niz : %d\n",deltaPozitif);
                                        minBallEnergy=ballEnergy-deltaPozitif;
                                        printf("Minimum Ball Energy Degeri : %d\n ",minBallEnergy);
                                        break;
                                    }
                            }
                    }
                    else {
                        deltaPozitif=0;
                        ballEnergy=0;
                        counter=0;
                }
            }
        }
     return 0;
    }
