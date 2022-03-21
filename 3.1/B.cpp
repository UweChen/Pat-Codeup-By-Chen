#include<cstdio>
#include<cstring>

int main(int argc, char const *argv[])
{
    int s1,s2;
    char a[20],b[20];//不能设置10位 太短  -234567890无法输入
    while (scanf("%s%s",a,b)!=EOF)
    {
        int d1=0,d2=0;
        s1=strlen(a);
        s2=strlen(b);
        for (int i = 0; i < s1; i++)
            if (a[i]>='0'&&a[i]<='9')d1=d1*10+a[i]-'0';
        for (int j = 0; j < s2; j++)
            if (b[j]>='0'&&b[j]<='9')d2=d2*10+b[j]-'0';
        if (a[0]=='-')
            d1=-d1;
        if (b[0]=='-')
            d2=-d2;
        printf("%d\n",d1+d2);//不要忘了\n
    }
    
    return 0;
}
