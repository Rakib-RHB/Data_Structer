#include<stdio.h>
#include<math.h>
typedef struct
{
    int x;
    int y;
} point;
typedef struct
{
    int X;
    int Y;
} Point ;
int main()
{
    double d, dx, dy;
    point p,q;
    p.x = 2;
    p.y = 5;
    q.x = 4;
    q.y = 9;
    dx = p.x - q.x;
    dy = p.y - q.y;
    d = ( dx * dx ) + (dy * dy);
    d = sqrt(d);
    printf("Euclidean Distance is %lf\n",d);
    printf("Using Scanf : ");

    double  D,dX, dY;
    Point P, Q;
    scanf("%d",&P.X);
    scanf("%d",&P.Y);
    scanf("%d",&Q.X);
    scanf("%d",&Q.Y);
    dX = P.X - Q.X;
    dY = P.Y - Q.Y;
    D = (dX*dX)+(dY*dY);
    D = sqrt(D);
        printf("Euclidean Distance is %lf\n",D);




    return 0;
}
