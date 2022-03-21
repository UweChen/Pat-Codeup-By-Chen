#include<cstdio>
int main(int argc, char const *argv[])
{
    long long N,a,b,c;
    scanf("%lld",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        a+b>c?printf("Case #%lld: true\n",i+1):printf("Case #%lld: false\n",i+1);//i+1不是i
    }
    return 0;
}
