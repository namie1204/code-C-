#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float S;
    char choice;
start:
    S = 0;
    cout << "Nhap n chuoi can tinh tong: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Vui long nhap n > 0 ";
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            S += 1.0 / (2 * i + 1);
        }
    }
    cout << "Tong chuoi la: " << S << endl;

    cout << "Ban co muon tiep tuc (y/n)? ";
    cin >> choiNce;
    if (choice == 'y' || choice == 'Y')
    {
        goto start;
    }

    return 0;
}
