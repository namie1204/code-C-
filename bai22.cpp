// Tinh tich uoc so nguyen duong N
#include <iostream>
using namespace std;
int main()
{

    int n;
    long S = 1;
    char abc;
start:
    cout << "Nhap N can tim tich uoc so\n";
    cin >> n;
    if (n <= 0)
    {
        cout << "Vui long nhap N > 0 !!!";
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                S *= i;
            }
        }
        cout << "Tich cac uoc so nguyen duong N la: S =" << S << endl;
    }

    cout << "\nBan co muon tiep tuc (y/n)?";
    cin >> abc;
    if (abc == 'y' || abc == 'Y')
    {
        goto start;
    }

    return 0;
}