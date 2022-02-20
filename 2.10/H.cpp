#include<cstdio>
int main(int argc, char const *argv[])
{ //考察的是嵌套while(T--)型
//和G不一样的是最后一个不输出额外的空行
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
        if(N!=0)printf("\n");//N在最后一个循环开始前已经减小为0
    }
    return 0;
}
