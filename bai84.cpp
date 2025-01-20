// Created by Trann on 1/19/2025
//gia phuong tirnh ax+b=0
#include <iostream>
using namespace std;

int main() {
    char abc;
    int a, b;
    float x;

    do {
        cout << "\nNhap he so a: ";
        cin >> a;
        cout << "Nhap he so b: ";
        cin >> b;

        switch (a) {
            case 0:
                if (b == 0) {
                    cout << "Phuong trinh co vo so nghiem." << endl;
                } else {
                    cout << "Phuong trinh vo nghiem." << endl;
                }
            break;
            default:
                x = -static_cast<float>(b) / a;
            cout << "Nghiem cua phuong trinh la: x = " << x << endl;
            break;
        }

        cout << "\nBan co muon tiep tuc (y/n)? ";
        cin >> abc;

    } while (abc == 'y' || abc == 'Y');

    cout << "\nCam on ban da su dung chuong trinh!" << endl;

    return 0;
}
