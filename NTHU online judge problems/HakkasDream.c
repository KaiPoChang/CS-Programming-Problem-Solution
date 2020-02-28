# include <stdio.h>
# include <math.h>

int main(){
    int times;
    double firstMonth, secondMonth, rate;
    scanf("%d", &times);
    for (int i=0; i<times; i++){
        scanf("%lf %lf", &firstMonth, &secondMonth);
        rate = (secondMonth-firstMonth)/firstMonth*100;
        if (round(rate*100)/100 == (double)0){
            printf("%7.2lf%% \\^o^/\n", 0.00);
        }
        else if (rate >= 5){
            printf("%7.2lf%% (#\`\Д\´)\ﾉ\n", round(rate*100)/100);
        }
        else if (rate <= -5){
            printf("%7.2lf%% (\ゝ\∀\･)b\n", round(rate*100)/100);
        }
        else{
            printf("%7.2lf%% \\^o^/\n", round(rate*100)/100);
        }
    }
    return 0;
}

