#include <iostream>
using namespace std;

int main()
{
    int m, a;
    cin >> m >> a;
    int x0 = 1, x1 = 0, y0 = 0, y1 = 1, r, x, y, q, temp = m, temp2=a;
    while (a > 0)
    {
        r = m % a;
        if (r == 0)
        {
            break;
        }
        q = m/a;
        x = x0 - q*x1;
        y = y0 - q*y1;
        x0 = x1;
        x1 = x;
        y0 = y1;
        y1 = y;
        m = a;
        a = r;
    }
    if (a > 1)
        cout << temp << " va " << temp2 << " khong phai la 2 so nguyen to cung nhau!\n" << "Vay khong ton tai nghich dao!\n";
    else if (y < 0)
        cout << "Nghich dao cua " << a << " la: " << y + temp;
    else
        cout << "Nghich dao cua " << a << " la: " << y;
    return 0;

}