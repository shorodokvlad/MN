/* Program Bisectia1-condiție tip (1) */
#include<conio.h>
#include<stdio.h>
#include<math.h>
float a,b,eps,x,C, A;
float F(float u)
{
    return u*u-3;
}
int main ()
{
    printf("introduceti intervalul in care este separata radacina \n");
    printf("introduceti capatul din stanga a:");
    scanf("%f",&a);
    printf("\nintroduceti capatul din dreapta b:");
    scanf("%f",&b);
    printf("eroarea:");
    scanf("%f",&eps);
    x=(a+b)/2;
    A=F(x);
    while (fabs(A)>=eps)
    {
        C=F(a)*F(x);
        if (C<0)
            b=x;
        else a=x;
        x=(a+b)/2;
        printf("\n%f",x); /*afiseaza valorile intermediare*/
        A=F(x);
    }
    if (A==0)
        printf ("\n%f este solutia exacta a ecuatiei", x);
    else
        printf ("\n%f este solutia aproximativa a ecuatiei", x);
    getch();
}
