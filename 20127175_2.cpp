#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
float ex2(int n)
{
    float s=0;
    if (n <= 0)
    {
        return 0;
    } else
    {
        for (int i = 1; i <= n+1; i++)
        {
            s=s+i;
            return (1/s)*pow(-1,n+1)+ex2(n-1);
        }
    }
}
int main()
{
    int n;
    float s=0;
    cout << "Nhap n: ";
    cin >> n;
    s = ex2(n)*1.0;
    cout << "S(" << n << ") = " << s << endl;
    system("pause");
    return 0;
}