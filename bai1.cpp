#include <iostream>
using namespace std;
int main()
{
    int S, n, i;
    S = 0;
    cout << "Nhan n chuoi can tinh tong:";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        S += i * i;
    }
    cout << S << endl;
    return 0;
}
