#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person {
    char name[20];
    int count;
}leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

int main(int argc, char const *argv[])
{
    int n;
    char put_in[20];
    scanf("%d",&n);

    for (int i = n; i > 0; i--)
    {
        scanf("%s",put_in);
        for (int i = 0; i < 3; i++)
        {
            if (!strcmp(put_in,leader[i].name)) //要取非，注意字符串比较
            {
                leader[i].count++;
            }
        }     
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("%s:%d\n",leader[i].name,leader[i].count);
    }
    system("pause");
    return 0;
}



