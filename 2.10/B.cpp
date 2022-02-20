#include<cstdio>
int main(int argc, char const *argv[])
{//考察的是while(T--)型
    int N,a,b;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}
