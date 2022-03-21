#include<stdio.h>
int main(int argc, char const *argv[])
{
    int N,M,a[100000];
    int sum=0,m1,m2,part=0;//part是顺序求路径长度，sum-part是逆序
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    scanf("%d",&M);
    while (M--)
    {
        scanf("%d%d",&m1,&m2);
        if (m1>m2)
        {int temp;temp=m1;m1=m2;m2=temp;}
        
        part=0;//不要忘记清0 设置成局部变量更好
        for (int i = m1; i < m2; i++)//i是逻辑上处理
        {
            part+=a[i-1];//i-1是实际操作
        }
        part<sum-part?printf("%d\n",part):printf("%d\n",sum-part);
        
    }
    
    return 0;
}
