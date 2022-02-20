#include<cstdio>
int main(int argc, char const *argv[])
{//考察的是在没有0输入表中止的情况下(手动中止)，EOF的使用（自动中止）
    int N,count,a;
    while(scanf("%d",&N)!=EOF)//逗号运算符
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
