#include <stdio.h>

int main(){
    int hourlyWage, Ahr, Amin, Asec, Bhr, Bmin, Bsec;
    scanf("%d", &hourlyWage);
    scanf("%d:%d:%d ~ %d:%d:%d", &Ahr, &Amin, &Asec, &Bhr, &Bmin, &Bsec);

    if (Bsec-Asec < 0){
        Bmin = Bmin - 1;
        Bsec = Bsec + 60;
    }
    if (Bmin-Amin < 0){
        Bhr = Bhr - 1;
        Bmin = Bmin + 60;
    }
    printf("Working Time: %d Hour(s) %d Minute(s) %d Second(s)\n", Bhr-Ahr, Bmin-Amin, Bsec-Asec);
    printf("Daily Wage: %d TWD\n", (Bhr-Ahr)*hourlyWage);
    return 0;
}


