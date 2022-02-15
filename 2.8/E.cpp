#include<cstdio>
struct student
{
    int num;
    char name[19];
    int A;
    int B;
    int C;
}stu[10];

void input(student* a){
    scanf("%d %s %d %d %d",&a->num,a->name,&a->A,&a->B,&a->C);
}

void print(student* a){
    printf("%d %s %d %d %d\n",a->num,a->name,a->A,a->B,a->C);
}

int main(int argc, char const *argv[])
{   
    double Aav=0,Bav=0,Cav=0,PresentAv;
    student* highest=stu;
    for (int i = 0; i < 10; i++)
    {
        input(stu+i);
        PresentAv=((stu+i)->A+(stu+i)->B+(stu+i)->C)/3;
        if (PresentAv>(highest->A+highest->B+highest->C)/3)
            highest=stu+i;
        Aav+=(stu+i)->A;
        Bav+=(stu+i)->B;
        Cav+=(stu+i)->C;
    }
    
    Aav/=10;
    Bav/=10;
    Cav/=10;
    printf("%.2f %.2f %.2f\n",Aav,Bav,Cav);
    print(highest);
    return 0;
}


