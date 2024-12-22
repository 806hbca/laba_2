

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

double ddy(double x)
{
    return exp(x) - exp(-x);
}

double dy(double x)
{
    return exp(x) + exp(-x);
}

double y(double x)
{
    return exp(x) - exp(-x)-2;
}

double result_x1(double x0)
{
    return x0-(y(x0)/dy(x0));
}

int main()
{
    setlocale(LC_ALL, "russian");
    double epsilon, a, b,x1,x0;
    cout << "ВВедите эпсилон, начало интервала и конец интервала: ";
    cin >> epsilon>> a>> b;
    x0 = (ddy(b)*y(b)>0)? b: a;
    x1 = result_x1(x0);
    while (abs(x1 - x0) >= epsilon)
    {
        x0 = x1;
        x1 = result_x1(x0);
    }
    cout << "Корень на интервале: " << x1;
}

