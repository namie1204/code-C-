#include <iostream>
using namespace std;

int main()
{
    int n, i;
    long P, S;
    char choice;
start:
    S = 0;
    P = 1;
    i = 1;
    do
    {
        cout << "Nhap n chuoi can tinh tong: ";
        cin >> n;
        if (n < 1)
        {
            cout << "Xin vui long nhap n lon hon 1. Vui long nhap lai!!!";
        }
    } while (n < 1);
    while (i <= n)
    {
        P *= i;
        S += P;
        i++;
    }
    cout << "Tong chuoi la: " << S << endl;

    cout << "Ban co muon tiep tuc (y/n)? ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        goto start;
    }

    return 0;
}
