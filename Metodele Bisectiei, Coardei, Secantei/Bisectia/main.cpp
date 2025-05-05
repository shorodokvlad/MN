#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

float a, b, eps, x, A, C;
float F(float u)
{
    return u * u - 3;
}

int main()
{
    cout << "Introduceti inrervalul in care este separata radacina \n";

    cout << "Introduceti capatul din stanga: ";
    cin >> a;

    cout << "Introduceti capatul din dreapta: ";
    cin >> b;

    cout << "Eroarea: ";
    cin >> eps;

    x = (a + b) / 2;
    A = F(x);

    while (fabs(A) >= eps)
    {
        C = F(a) * F(x);
        if (C < 0)
            b = x;
        else a = x;

        x = (a + b) / 2;
        A = F(x);
    }
    if (A == 0)
        printf("\n%f are o solutie exacta", x);
    else
        printf("\n%f are o solutie aproximativa", x);



    return 0;
}
