// Kiem tra so do co phai la so chinh phuong hay ko
// Duoi day la 1 trong nhieu cach, cach nay kieem tra tan cung la 1,4,5,6,9
#include <iostream>
#include <cmath>
using namespace std;
bool kt(int n)
{
    if (n < 0)
        return false;
    int A = n % 10;
    if (A != 0 && A != 1 && A != 4 &&
        A != 5 && A != 6 && A != 9)
    {
        return false;
    }
    int sqrt_n = static_cast<int>(sqrt(n));
    return sqrt_n * sqrt_n == n;
}

int main()
{
    int n;
    cout << "Nhap 1 so: ";
    cin >> n;

    if (kt(n))
    {
        cout << n << " la so chinh phuong.\n";
    }
    else
    {
        cout << n << " khong phai la so chinh phuong.\n";
    }

    return 0;
}