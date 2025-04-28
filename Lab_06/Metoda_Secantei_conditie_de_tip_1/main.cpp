/* Program Metoda Secantei- conditie de tip(1) */
#include<conio.h>
#include<stdio.h>
#include<math.h>
float a,b,eps,x, A;
float F(float u)
{
    return u*u-5;
}
int main ()
{
    printf("introduceti intervalul in care este separata radacina\n");
    printf("introduceti capatul din stanga a:");
    scanf("%lf",&a);
    printf("\nintroduceti capatul din dreapta b:");
    scanf("%lf",&b);
    printf("eroarea:");
    scanf("%lf",&eps);
    do
    {
        x=(a*F(b)-b*F(a))/(F(b)-F(a));
        a=b;
        b=x;
        A=F(x);
    }
    while (fabs(A)>=eps);
    if (fabs(A)==0)
        printf ("%f este solutia exacta a ecuatiei", x);
    else
        printf ("%f este solutia aproximativa a ecuatiei", x);
    getch();
}
