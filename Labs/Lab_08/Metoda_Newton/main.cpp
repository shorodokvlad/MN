/* Metoda Newton */
#include <stdio.h>
#include <iostream>
#include<math.h>
using namespace std;

float a, b, x[1000], y[1000], z[1000], p, h, s;
float f(float x)
{
    return x * x + 3 * x;
}
int i, n;

int main ()
{
    cout << "introduceti limita din stanga a: ";
    cin >> a;

    cout << "introduceti limita din dreapta a: ";
    cin >> b;

    cout << "introduceti numarul de subintervale: ";
    cin >> n;

    h = (b - a) / n;
    for (i = 1; i <= n; i++)
        x[i] = a + i * h;
    s = f(a) + f(b);

    for (i = 1; i <= n - 1; i++)
        s = s + 2 * f(x[i]);

    for (i = 1; i <= n; i++)
        y[i] = x[i - 1] + h / 3;

    for (i = 1; i <= n; i++)
        z[i] = x[i - 1] + 2 * h / 3;

    for (i = 1; i <= n; i++)
        p = p + 3 * (f(y[i]) + f(z[i]));

    s = (s + p) * h / 8;


    printf(" valoarea aproximativa a integralei este I=%f",s);
}
