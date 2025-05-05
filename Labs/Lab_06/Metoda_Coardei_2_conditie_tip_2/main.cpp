/* Program Metoda Coardei 2 –conditie de tip (2) */
#include<conio.h>
#include<stdio.h>
#include <math.h>
float a,b,eps,x,y,A,C,ER;
float F(float u)
{
    return u*u-2;
}
int main ()
{
    printf("introduceti intervalul in care este separata radacina\n");
    printf("introduceti capatul din stanga a:");
    scanf("%f",&a);
    printf("\nintroduceti capatul din dreapta b:");
    scanf("%f",&b);
    printf("eroarea:");
    scanf("%f",&eps);
    x=a-F(a)*(b-a)/(F(b)-F(a));
    ER=b-a;
    while (fabs(ER)>=eps)
    {
        C=F(x)*F(a);
        if (C<0)
            y=x-F(x)*(x-a)/(F(x)-F(a));
        else
        {
            y=x-F(x)*(b-x)/(F(b)-F(x));
            a=b;
        }
        ER=y-x;
        x=y;
    }
    A=F(x);
    if (A==0)
        printf ("%f este solutia exacta a ecuatiei", x);
    else
        printf ("%f este solutia aproximativa a ecuatiei", x);
    getch();
}
