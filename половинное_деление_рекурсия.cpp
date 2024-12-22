#include <iostream>
#include <cmath>
using namespace std;



double y(double x)
{
    return exp(x) - exp(-x) - 2;
}

double rec(double a, double b, double epsilon)
{
    double x = (a + b) / 2;
    if (abs(a - b) < epsilon)
    {
        return x;
    }
    else if (y(a) * y(x) < 0)
    {
        return rec(a, x, epsilon);
    }
    else
    {
        return rec(x, b, epsilon);
    }
}

int main()
{
    setlocale(LC_ALL, "russian");
    cout << "Введие epsilon, a и b:";
    double epsilon, a, b;
    cin >> epsilon >> a >> b;
    cout << "Корень уравнения: " << rec(a, b, epsilon);
}
