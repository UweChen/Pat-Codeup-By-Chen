#include<cstdio>

//struct可以结构体用来批处理文件，类似Python！
struct student
{
    int num;
    char name[19];
    int A;
    int B;
    int C;
}stu[5];

void input(student* a){
    scanf("%d %s %d %d %d",&a->num,a->name,&a->A,&a->B,&a->C);
}

void print(student* a){
    printf("%d %s %d %d %d\n",a->num,a->name,a->A,a->B,a->C);
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
    {
        input(stu+i);
    }
    
    for (int i = 0; i < 5; i++)
    {
        print(stu+i);
    }
    
    return 0;
}


