#include<cstdio>
#include<stdlib.h>
struct {
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int classnum;
        char position[10];
    }category;
}people[100];

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %c %c ",&(people+i)->num,&(people+i)->name,&(people+i)->sex,&(people+i)->job);
        if((people+i)->job=='s')scanf("%d",&(people+i)->category.classnum);
        else 
            scanf("%s",&(people+i)->category.position);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %c %c ",(people+i)->num,(people+i)->name,(people+i)->sex,(people+i)->job);
        if((people+i)->job=='s')printf("%d\n",(people+i)->category.classnum);
        //两个/n是分开的，别忘记了 
        else 
            printf("%s\n",(people+i)->category.position);
    }
    
    return 0;
}
