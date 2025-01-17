// Tong cac uoc chan so nguyen duong N
#include <iostream>
using namespace std;

int main()
{
    int n, S;
    char abc;

    do
    {
        int dem = 0; // Đặt lại biến đếm mỗi lần lặp
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
                    if (i % 2 == 0)
                    {
                        S += i;
                    }
                    cout << i << " ";

                    dem++;
                }
            }
            cout << "\nTong uoc so nguyen duong n la: " << S << endl;
            cout << "\nSo luong uoc so nguyen duong cua N la: " << dem << endl;
        }
        cout << "\nBan co muon tiep tuc (y/n)? ";
        cin >> abc;
    } while (abc == 'y' || abc == 'Y');

    cout << "Cam on ban da su dung chuong trinh!" << endl;

    return 0;
}