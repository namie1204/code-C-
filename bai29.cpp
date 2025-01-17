// Cho so nguyen duong N tinh tong tat ca uoc so be hon chinh no
// Dem so luong uoc chan cua so nguyen duong N

#include <iostream>
using namespace std;

int main()
{
    int n, max;
    char abc;
    long S;
    S = 0;
    do
    {
        int dem = 0;
        cout << "Nhap N can tim so luong uoc so: ";
        cin >> n;

        if (n <= 0)
        {
            cout << "Vui long nhap N > 0 !!!" << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (n % i == 0)
                {
                    if (i % 2 != 0)
                    {
                        max = 1;
                        if (max < i)
                        {
                            max = i;
                        }
                    }
                    cout << i << " ";
                }
            }

            cout << "\nUoc so le lon nhat la: " << max << endl;
        }
        cout << "\nBan co muon tiep tuc (y/n)? ";
        cin >> abc;
    } while (abc == 'y' || abc == 'Y');

    cout << "Cam on ban da su dung chuong trinh!" << endl;

    return 0;
}