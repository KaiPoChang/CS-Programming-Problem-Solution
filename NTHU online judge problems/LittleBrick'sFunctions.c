# include <stdio.h>

int gcd(int a, int b){
    int divNum=0;
    int beDivNum=0;
    int remainder =0;

    if (a>b){
        beDivNum = a;
        divNum = b;
    }
    else{
        beDivNum = b;
        divNum = a;
    }
    while(divNum!=0){
        remainder = beDivNum%divNum;
        beDivNum = divNum;
        divNum = remainder;
    }
    return beDivNum;
}

int lcm(int a, int b){
    return a*b/gcd(a, b);
}

int power(int a, int b){
    int ans = 1;
    for (int i=0; i<b; i++){
        ans *= a;
    }
    return ans;
}

int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("%d\n", gcd(lcm(power(a, b), c), d));
    printf("%d\n", gcd(power(lcm(a, b), c), d));
    printf("%d\n", lcm(gcd(power(a, b), c), d));
    printf("%d\n", lcm(power(gcd(a, b), c), d));
    printf("%d\n", power(gcd(lcm(a, b), c), d));
    printf("%d\n", power(lcm(gcd(a, b), c), d));
    return 0;
}
