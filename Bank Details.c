/* Write down a program that define a structure to store information
of a Bank Account  Then take Name and Balanced of two person's as user
input and find the Richer person .*/

#include<stdio.h>
typedef struct
{
    char n[100];
    float b;
} Account;
int main()
{
    Account p,q;
    printf("1st Person details : ");
    gets(p.n);
    printf(" Balanced :");
    scanf("%f",&p.b);
    fflush(stdin);

    printf("2 Person details :");
    gets(q.n);
    printf(" Balanced :");
    scanf("%f",&q.b);
    if(p.b > q.b)
    {
        puts(p.n);

    }

    else if(p.b < q.b)
    {
        puts(q.n);
    }
    else
    {
        printf("They are Equal Rich.\n");
    }

}



