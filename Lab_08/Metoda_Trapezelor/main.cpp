/* Metoda Trapezelor */
#include<conio.h>
#include<stdio.h>
float a,b,x[1000],h, s;
float f(float);
int i,n;
int main()
{
    printf("introduceti limita din stanga a:");
    scanf("%f",&a);
    printf("\nintroduceti limita din dreapta b:");
    scanf("%f",&b);
    printf("introduceti numarul de subintervale n:");
    scanf("%d",&n);
    h=(b-a)/n;
    for(i=1; i<=n-1; i++)
        x[i]=a+i*h;
    s=f(a)+f(b);
    for(i=1; i<=n-1; i++)
        s=s+2*f(x[i]);
    s=s*h/2;
    printf(" valoarea aproximativa a integralei este I=%f",s);
}
float f(float x)
{
    return x*x+3*x;
}
