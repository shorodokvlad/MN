/* Metoda Simpson */
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

float a, b, x[1000], y[1000], p, h, s;
float f(float x)
{
    return x * x + 3 * x;
}
int i, n;

int main ()
{
    cout << "introduceti limita din stanga a: ";
    cin >> a;

    cout << "introduceti limita din dreapta b: ";
    cin >> b;

    cout << "introduceti numarul de subintervale: ";
    cin >> n;

    h = (b - a) / n;

    for (i = 0; i <= n; i++)
        x[i] = a + i * h;
    s = f(a) + f(b);

    for (i = 1; i <= n - 1; i++)
        s = s + 2 * f(x[i]);

    for (i = 1; i <= n; i++)
        y[i] = (x[i - 1] + x[i]) / 2;

    for (i = 1; i <= n; i++)
        p = p + 4 * f(y[i]);

    s = (s + p) * h / 6;

    printf("valoarea aproximativa a integralei este I=%f", s);
}
