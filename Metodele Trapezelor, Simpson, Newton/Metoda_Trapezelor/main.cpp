
#include <stdio.h>
#include <iostream>
using namespace std;

float a, b, x[1000], h, s;
float f(float x)
{
    return x * x + 3 * x;
}
int i, n;

int main()
{
    cout << "introduceti limita din stanga a: ";
    cin >> a;

    cout << "introduceti limita din dreapta a: ";
    cin >> b;

    cout << "introduceti numarul de subintervale: ";
    cin >> n;

    h = (b - a) / n;

    for (i = 1; i <= n - 1; i++)
        x[i] = a + i * h;
    s = f(a) + f(b);

    for (i = 1; i <= n - 1; i++)
        s = s + 2 * f(x[i]);

    s = s * h / 2;




    printf("valoarea aproximativa a integralei este I =%f", s);

}



