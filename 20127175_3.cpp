#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    float a, b, c, x1, x2, x3, x4, x5, x6, delta;   
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Phuong trinh co vo so nghiem" << endl;
            } else 
            {
                cout << "Phuong trinh vo nghiem" << endl;
            }
        } else if (b != 0)
        {
            if (c == 0)
            {
                cout << "Nghiem cua phuong trinh = 0" << endl;
            } else
            {
                x1 = x2 = - c / b;
                cout << "Nghiem cua phuong trinh = " << x1 << endl;
            }     
        }   
    } else
    {
    delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "Phuong trinh vo nghiem" << endl;
    } else if (delta == 0)
    {
        x1 = - b / 2 * a;
        x2 = sqrt(x1);
        x3 = -x2;
        cout << "Phuong trinh co 2 nghiem " << x3 << " va " << x2 << endl;
    } else if (delta > 0)
    {
        x1 = (- b + sqrt(delta)) / 2 * a;
        x2 = (- b - sqrt(delta)) / 2 * a;
        x3 = sqrt(x1);
        x4 = -x3;
        x5 = sqrt(x2);
        x6 = -x5;
        cout << "Phuong trinh co 2 nghiem = " << x3 << " voi " << x4;
        cout << " va 2 nghiem = " << x5 << " voi " << x6 << endl;
    }
    }
    system ("pause");
    return 0;
}