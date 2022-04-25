#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char time[][21] = {"o' clock", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};

int main() {
    printf("Okunusu istediginiz saati girerken 2 haneli olarak giriniz Orn:02:30 seklinde!");
    printf("\n ");
    int minutes, hours;
    int half = 0;
    printf("Lutfen saati giriniz  : ");
    scanf("%d", &hours);
    printf("Lutfen dakikayi  giriniz  : ");
    scanf("%d", &minutes);


    printf("Girmis oldugunuz saatin okunusu : ");
    printf("\n ");
    if (minutes > 30) {
        minutes = 60-minutes;
        half = 1;
    }

    if (minutes < 21 && minutes != 15 && minutes != 0 && minutes != 1) {
        printf("%s minutes ", time[minutes]);
    }
    else if (minutes == 1) {
        printf("%s minute ", time[minutes]);
    }
    else if (minutes > 20 && minutes < 30) {
        printf("%s %s minutes ", time[20], time[minutes-20]);
    }
    else if (minutes == 15) {
        printf("quarter ");
    }
    else if (minutes == 30) {
        printf("half ");
    }

    if (half && minutes != 0) {
        printf("to %s", time[hours+1]);
    }
    else if (!half && minutes != 0){
        printf("past %s", time[hours]);
    }
    else {
        printf("%s %s", time[hours], time[0]);
    }


    return 0;
}
