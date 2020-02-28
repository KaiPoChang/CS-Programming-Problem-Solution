# include<stdio.h>

int main(){
    int input, num, i=1, c=1, k=1, j=19, r, q;
    int binaryInput[20] = {0};
    scanf("%d", &input);
    num = input;

    // initialize binaryInput
    while(num>0){
        binaryInput[i] = num%2;
        num = num/2;
        i++;
    }

    // 0001 addition
    while(c==1){
        r = (binaryInput[k]+c)%2;
        q = (binaryInput[k]+c)/2;

        binaryInput[k] = r;
        c = q;
        k++;
    }

    k = k-2;
    // let j points to 1
    while(!binaryInput[j]){
        j--;
    }
    for (j; j>=1; j--){
        printf("%d", binaryInput[j]);
    }
    printf(" %d", k);
    return 0;
}
