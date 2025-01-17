#include <iostream>
using namespace std; // Kiem tra dieu kien

int main()
{
    int n, i;
    float S = 0;
    cout << "Nhan n chuoi can tinh tong: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Vui long nhap n >0 ";
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            S += 1.0 / i;
        }
    }
    cout << S << endl;
    return 0;
}
