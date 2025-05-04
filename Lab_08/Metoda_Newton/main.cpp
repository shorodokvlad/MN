/* Metoda Newton */
#include<conio.h>
#include<stdio.h>
#include<math.h>
float f(float);
float a,b,x[1000],y[1000],z[1000], p, h, s;
int i,n;
int main ()
{
    printf("introduceti limita din stanga a:");
    scanf("%f",&a);
    printf("\nintroduceti limita din dreapta b:");
    scanf("%f",&b);
    printf("introduceti numarul de subintervale n:");
    scanf("%d",&n);
    h=(b-a)/n;
    for(i=0; i<=n; i++)
        x[i]=a+i*h;
    s=f(a)+f(b);
    for(i=1; i<=n-1; i++)
        s=s+2*f(x[i]);
    p=0;
    for(i=1; i<=n; i++)
        y[i]=x[i-1]+h/3;
    for(i=1; i<=n; i++)
        z[i]=x[i-1]+2*h/3;
    for(i=1; i<=n; i++)
        p=p+3*(f(y[i])+f(z[i]));
    s=(s+p)*h/8;
    printf(" valoarea aproximativa a integralei este I=%f",s);
}
float f(float x)
{
    return x*x+3*x;
}
