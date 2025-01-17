// tinh T(x) = x^N
#include <iostream>
using namespace std;
// ham tinh luy thua x^n
double power(double x, int n)
{
    double result = 1.0;
    for (int i = 0; i < abs(n); i++)
    {
        result *= x; // Nhan don x
    }

    // Neu N a, tra ve 1 / (x^|n|)
    if (n < 0)
    {
        return 1 / result;
    }
    return result;
}

int main()
{
    double x;
    int n;
    cout << "Tinh T(x) = x^n\n";
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;

    double result = power(x, n); // Tinh x^N
    cout << "T(" << x << ", " << n << ") = " << result << endl;

    return 0;
}
