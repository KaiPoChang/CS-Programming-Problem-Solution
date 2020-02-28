#include<stdio.h>
#define maxx 100

int tot=0,c[maxx],n;
int search_hou(int cur)
{
    int i,j;
    if(n==cur) tot++;
    else for(i=0;i<n;i++)
    {
        int ok=1;
        c[cur]=i;	//皇后在第cur行的第i列
        for(j=0;j<cur;j++)
            if(c[cur]==c[j] || cur-c[cur] == j-c[j] || cur+c[cur] == j+c[j] ) //进行判断皇后的位置是否合法
            {
                ok=0;
                break;
            }
        if(ok)
        search_hou(cur+1);
    }
}

int main()
{
    scanf("%d",&n);
    search_hou(0);
    printf("%d",tot);
    return 0;
}
