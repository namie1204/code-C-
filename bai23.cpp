// Đếm số lượng ước số nguyên dương của N
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     char abc;

//     do
//     {
//         int dem = 0; // Đặt lại biến đếm mỗi lần lặp
//         cout << "Nhap N can tim so luong uoc so: ";
//         cin >> n;

//         if (n <= 0)
//         {
//             cout << "Vui long nhap N > 0 !!!" << endl;
//         }
//         else
//         {
//             for (int i = 1; i <= n; i++)
//             {
//                 if (n % i == 0)
//                 {
//                     dem++;
//                 }
//             }
//             cout << "So luong uoc so nguyen duong cua N la: " << dem << endl;
//         }

//         cout << "\nBan co muon tiep tuc (y/n)? ";
//         cin >> abc;

//     } while (abc == 'y' || abc == 'Y');

//     cout << "Cam on ban da su dung chuong trinh!" << endl;

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{

    int n;
    long S = 1;
    char abc;
    int dem = 0;
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
                dem++;
            }
        }
        cout << "SO luong uoc so nguyen duong cua N la" << dem << endl;
    }

    cout << "\nBan co muon tiep tuc (y/n)?";
    cin >> abc;
    if (abc == 'y' || abc == 'Y')
    {
        goto start;
    }

    return 0;
}
