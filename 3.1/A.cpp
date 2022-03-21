#include <cstdio>
#include <string.h>
int main(int argc, char const *argv[])
{
    int a[10000],L,M;
    while (scanf("%d%d",&L,&M)!=EOF && L!=0)//避免马路长度为0
    {
        int m1,m2,count=L+1;
        memset( a, 0 ,sizeof(a));
        for ( int i=0; i <= L; i++)
        {//种树的点 置1
            a[i]=1;
        }

        while (M--)
        {
            scanf("%d%d",&m1,&m2);
            for (int j = m1; j <=m2 ; j++)
            {
                if (a[j]!=0)
                {
                    a[j]=0;
                    count--;
                }
            }
        }
        printf("%d\n",count);
    }
    
    return 0;
}
