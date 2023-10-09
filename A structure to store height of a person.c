/* Write down a program that defines a structure to store height of a
person , Then take two person's height's as input and find their height's
difference .*/


#include<stdio.h>

typedef struct
{
    int f ; // f (feet)
    int i;   // i (inches)
} height;


int main()
{
    height p, q, r;
    printf("Preson 1 : ");
    scanf("%d %d",&p.f,&p.i);
    printf("Preson 2 : ");
    scanf("%d %d",&q.f,&q.i);
    int d = (p.f*12 + p.i)-(q.f*12 + q.i);
    d = (d < 0)?-d:d;
    r.f = d/12;
    r.i = d%12;
    printf("Difference %d feet  %d inch\n",r.f,r.i);
    return 0;

}

