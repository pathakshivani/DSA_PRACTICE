#include<stdio.h>
#include<conio.h>
int create (struct node **,int, char*,float);
int dsp(struct node *);
int i;
struct node
{

    int a;
    char v;
    float s;
     struct node *p;
};
int main()
{
    struct node *p;
    p=NULL;
    int A;
    char V;
    float S;


    for(i=0;i<5;i++)
    {
        printf("enter data=");
        scanf("%d %c %f",&a,b,&c);
         create(&p,a,v,s);
    }
    dsp(p);
}
