// Created by Trann on 1/19/2025
//kiem tra hai so thuc co cung dau hay khong
#include <iostream>
using namespace std;

int main()
{
    char abc;
    float a,b;

    do
    {
        cout << "\nNha 2 so thuc ban muon kiem tra dau: ";
        cin >> a>>b;
        if((a == 0&& b==0)||(a!=0&&b==0)||(b!=0&&a==0)){
          cout<< "Vui long nhap so khac 0."<<" a = "<<a<<" b = "<<b;
        }else{
          if(a>0&&b>0){
            cout<<"2 so cung dau(so duong)"<<" a = "<<a<<" b = "<<b;
          }else if ((a<0&&b>0)||(b<0&&a>0)){
            cout<<"2 so khac dau"<<" a = "<<a<<" b = "<<b;
          }else{
            cout<<"2 so cung dau(am)"<<" a = "<<a<<" b = "<<b;
          }
        }

        cout << "\nBan co muon tiep tuc (y/n)? ";
        cin >> abc;

    } while (abc == 'y' || abc == 'Y');

    cout << "\nCam on ban da su dung chuong trinh!" << endl;

    return 0;
}
