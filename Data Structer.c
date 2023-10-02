typedef struct
{
    int month ;
    int day ;
    int year ;
} Adate;
typedef struct
{
    int MONTH ;
    int DAY ;
    int YEAR ;
} Adate1;
int main ()
{
    Adate d;
    d.month  = 10;
    d.day = 2;
    d.year = 2023;
    printf("%d/",d.month);
    printf("%d/",d.day);
    printf("%d",d.year);
    printf("\n");



    printf("Using Scanf : ");

    Adate1 p;

    scanf("%d",&p.MONTH);
    scanf("%d",&p.DAY);
    scanf("%d",&p.YEAR);


    printf("%d/",p.MONTH);
    printf("%d/",p.DAY);
    printf("%d",p.YEAR);
    return 0;

}
