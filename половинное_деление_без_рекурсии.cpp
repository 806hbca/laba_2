

#include <iostream>
#include <cmath>
using namespace std;

double func(double x0)
{
    return exp(x0) - exp(-x0) - 2;
}

int main()
{
    setlocale(LC_ALL, "russian");
    cout << "Введие epsilon, a и b:";
    double epsilon, a, b, x0;
    cin >> epsilon >> a >> b;
    while (abs(b - a) >= epsilon)
    {
        x0 = (b + a) / 2;
        if (func(x0) * func(a) < 0)
        {
            b = x0;
        }
        else
        {
            a = x0;
        }
    }
    x0 = (b + a) / 2;
    cout << "Корень уравнения: "<< x0;
}

