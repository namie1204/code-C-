#include <iostream>
using namespace std;

int main() {
  char abc;
  int a;

  do {
    cout << "\nNhap thang ban muon xem quy (nhap tu thang 1 - thang 12): ";
    cin >> a;
    if (a < 1 || a > 12) {
      cout << "Vui long nhap thang tu 1 den 12." << endl;
    } else {
      switch ((a - 1) / 3) {
        case 0:
          cout << "Quy 1" << endl;
        break;
        case 1:
          cout << "Quy 2" << endl;
        break;
        case 2:
          cout << "Quy 3" << endl;
        break;
        case 3:
          cout << "Quy 4" << endl;
        break;
      }
    }

    cout << "\nBan co muon tiep tuc (y/n)? ";
    cin >> abc;

  } while (abc == 'y' || abc == 'Y');

  cout << "\nCam on ban da su dung chuong trinh!" << endl;

  return 0;
}
