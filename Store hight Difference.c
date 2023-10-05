/* Write down a program that defines a structure to store hight of a person ,
then take two Person's heights as input and fine their heights different's.*/
#include<stdio.h>
typedef struct
{
    int f;
    int i;
} height;
int main ()
{
    int d;
    height p,q,r;
    printf("1 Person :\n");
    scanf("%d %d",&p.f,&p.i);
    printf("%d feet %d inches\n",p.f,p.i);
    printf("2 Person :\n");
    scanf("%d %d",&q.f,&q.i);
    printf("%d feet %d inches\n",q.f,q.i);
    d = (p.f * 12 + p.i) - (q.f * 12 + q.i);
    d = (d < 0) ? -d : d;
    r.f = d/12;
    r.i = d%12;
    printf("Difference %d feet %d inches\n",r.f,r.i);
    return 0;


}
