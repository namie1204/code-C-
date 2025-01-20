//
// Created by Trann on 1/19/2025.
//
//Tim so lon nhat trong a,b,c
#include <iostream>
using namespace std;

int main()
{
    char abc;
    int a, b, c, max;

    do
    {
        cout << "\nNhap ba so a, b, c lan luot: ";
        cin >> a >> b >> c;

        if (a > b && a > c)
        {
            max = a;
        }
        else if (b > a && b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }

        cout << "So lon nhat la: " << max << endl;
        cout << "\nBan co muon tiep tuc (y/n)? ";
        cin >> abc;

    } while (abc == 'y' || abc == 'Y');

    cout << "\nCam on ban da su dung chuong trinh!" << endl;

    return 0;
}
