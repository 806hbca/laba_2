        
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

double result_x1(double x0)
{
    return x0 + (exp(x0) - exp(-x0) - 2) / -3;
}
double def_result_x1(double x0)
{
    return 1 + (exp(x0) + exp(-x0)) / -3;
}


int main()
{
    ifstream fin("inp.txt");
    double epsilon, a, b, x1, x0;
    fin >> epsilon >> a >> b;
    x0 = (abs(def_result_x1(b))<1) ? b : a;
    x1 = result_x1(x0);
    while (abs(x1 - x0) >= epsilon)
    {
        x0 = x1;
        x1 = result_x1(x0);
        cout << x1 << "\t" << x0 << endl;
    }
}

