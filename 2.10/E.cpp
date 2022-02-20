#include<cstdio>
int main(int argc, char const *argv[])
{ //考察的是嵌套while(T--)型
    int N,M,count,a;
    scanf("%d",&N);
    while(N--)
    {
        count=0;
        scanf("%d",&M);
        while(M--)
        {
            scanf("%d",&a);
            count+=a;
        }
        printf("%d\n",count);
    }
    return 0;
}
