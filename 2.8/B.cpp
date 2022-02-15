#include<cstdio>
#include<stdlib.h>

struct student {
    int num;
    char name[20];
    char sex;
    int age;
}s[20];

int main(int argc, char const *argv[])
{//本题要求使用指向结构体数组的指针进行输入和输出。
    int n;
    scanf("%d",&n);
    //student s[n];变量n的值不可用作常量
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %c %d",&(s+i)->num,&(s+i)->name,&(s+i)->sex,&(s+i)->age);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %c %d\n",(s+i)->num,(s+i)->name,(s+i)->sex,(s+i)->age);
    }
    
    system("pause");    
    return 0;
}
