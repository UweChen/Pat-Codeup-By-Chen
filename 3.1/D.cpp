#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,m,even=0,odd=0;
    while(scanf("%d",&n)!=EOF)
    {    
        while(n--)
        {
            scanf("%d",&m);
            if (m%2==1)
                odd++;
            else
                even++;
        }
    even>odd?printf("NO\n"):printf("YES\n");//全部要大写
    }
    return 0;
}
