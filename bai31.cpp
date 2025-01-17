#include <iostream>
using namespace std;

// Trong C++, bool là một kiểu dữ liệu (data type) dùng để biểu diễn giá trị logic true hoặc false.
// Nó được sử dụng rộng rãi trong các điều kiện, kiểm tra logic và vòng lặp.
int main()
{
    int n;
    char abc;
    do
    {
        cout << "\nNhap N so nguyen to can tim: ";
        cin >> n;

        if (n <= 1)
        {
            cout << "\nVui long nhap so lon hon 1 de kiem tra!" << endl;
        }
        else
        {
            bool isPrime = true;

            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
                cout << n << " la so nguyen to." << endl;
            else
                cout << n << " khong phai la so nguyen to." << endl;
        }

        cout << "\nBan co muon tiep tuc (y/n)? ";
        cin >> abc;

    } while (abc == 'y' || abc == 'Y');

    cout << "\nCam on ban da su dung chuong trinh!" << endl;

    return 0;
}
