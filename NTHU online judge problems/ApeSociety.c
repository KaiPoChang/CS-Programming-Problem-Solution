#include <stdio.h>
#include <string.h>

char name[1010][12];
int grade[1010];

int main(){
    int n, m; scanf("%d%d", &n, &m);
    char *nama[1010];

    for(int i=0; i<n; i++){
        int a, b;
        scanf("%s %d %d", &name[i], &a, &b);
        grade[i] = 1000*a + (100-b);
        nama[i] = name[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(grade[i] > grade[j]){
                int tmp = grade[i];
                grade[i] = grade[j];
                grade[j] = tmp;
                char *t = nama[i];
                nama[i] = nama[j];
                nama[j] = t;
            }else if(grade[i] == grade[j] && strcmp(nama[i], nama[j]) < 0 ){
                char *t = nama[i];
                nama[i] = nama[j];
                nama[j] = t;
            }
        }
    }

    for(int i=0; i<m; i++) printf("%s\n", nama[i]);
    return 0;
}
