#include<stdio.h>
int main(int argc, char const *argv[])
{//考察的是while...break型
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if( a==0 && b==0)break;
        printf("%d\n",a+b);
    }
    return 0;
}
