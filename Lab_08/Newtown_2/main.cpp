/* Program Newton*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
float x0,x,eps,A;
float f(float u)
{
    return u*u-2;
}
float Df(float u)
{
    return 2*u;
}
int main ()
{
    printf("introduceti aproximatia initiala a radacinii cautate x0:");
           scanf("%f",&x0);
           printf("introduceti eroarea:");
           scanf("%f",&eps);
           x=x0-f(x0)/Df(x0);
           A=f(x);
           while (fabs(A)>=eps)
{
    x0=x;
    x=x0-f(x0)/Df(x0);
        A=f(x);
    }
    if (A==0)
    printf ("%f este solutia exacta a ecuatiei", x);
    else
        printf ("%f este solutia aproximativa a ecuatiei", x);
        getch();
    }
