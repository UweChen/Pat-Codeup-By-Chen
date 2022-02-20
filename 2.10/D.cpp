#include<cstdio>
int main(int argc, char const *argv[])
{//考察的是while(T--)型+每行求和+逗号运算符 不要忘记count每轮赋值0
    int N,count,a;
    while(scanf("%d",&N),N!=0)//逗号运算符
    {
        count=0;
        for(;N--;N!=0){
            scanf("%d",&a);
            count+=a;
        }
        printf("%d\n",count);
    }
    return 0;
}
