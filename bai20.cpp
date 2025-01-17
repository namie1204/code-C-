// Liet ke tst ca cac uoc so nguyen duong N
#include <iostream>
using namespace std;
int main()
{

    int n;
    char abc;
start:
    cout << "Nhap n can tim so nguyen duong\n";
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
                cout << i << " ";
            }
        }
    }
    cout << "\nBan co muon tiep tuc (y/n)?";
    cin >> abc;
    if (abc == 'y' || abc == 'Y')
    {
        goto start;
    }

    return 0;
}