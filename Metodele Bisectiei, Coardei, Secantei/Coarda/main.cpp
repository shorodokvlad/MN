#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

float a, b, eps, x, A, C;
float F(float u)
{
    return u * u - 2;
}

int main()
{
    cout << "Introduceti intervalul";

    cout << "Introduceti capatul din stanga: ";
    cin >> a;

    cout << "Introduceti capatul din dreapta: ";
    cin >> b;

    cout << "Introduceti eroarea: ";
    cin >> eps;

    x = a - F(a) * (b - a) / (F(b) - F(a));
    A = F(x);

    while (fabs(A) >= eps)
    {
        C = F(a) * F(x);
        if (C < 0)
        {
            x = x - F(x) * (x - a) / (F(x) - F(a));
        }
        else
            x = x - F(x) * (b - x) / (F(b) - F(x));
        A = F(x);
    }


    if (A == 0)
        printf("\n%f este o soluite exacta a ecuatiei", x);
    else
        printf("\n%f este o soluite aproximativa a ecuatiei", x);


    return 0;
}
