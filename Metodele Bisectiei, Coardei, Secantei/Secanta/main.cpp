#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

float a, b, eps, x, A, C;
float F(float u)
{
    return u * u - 5;
}

int main ()
{
    cout << "Introduceti intervalul";

    cout << "Introduceti capatul din stanga: ";
    cin >> a;

    cout << "Introduceti capatul din dreapta: ";
    cin >> b;

    cout << "Introduceti eroarea: ";
    cin >> eps;

    do
    {
        x = (a * F(b) - b * F(a)) / (F(b) - F(a));
        a = b;
        b = x;
        A = F(x);

    } while(fabs(A) >= eps);

    if (fabs(A) == 0)
        printf("\n%f este o soluite exacta a ecuatiei", x);
    else
        printf("\n%f este o soluite aproximativa a ecuatiei", x);
}
