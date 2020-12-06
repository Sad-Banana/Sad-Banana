#include <iostream>
#include <math.h>
using namespace std;
int ex1(int x, int n)
{
    if (n <= 0)
    {
        return 0;
    } else
    {
        return pow(-1,n+1)*pow(x,n)+ex1(x,n-1);
    }
} 
int main()
{
    int n, x, s;
    cout << "Input x: ";
    cin >> x;
    cout << "Input n: ";
    cin >> n;
    s = ex1(x,n);
    cout << "S(" << x << "," << n << ") = " << s << endl;
    system("pause");
    return 0;
}
