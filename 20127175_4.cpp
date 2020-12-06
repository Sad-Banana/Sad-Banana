#include <iostream>
#include <math.h>
using namespace std;
bool ex4(int n)
{
	if ( log(n) / log(2) == ceil(log(n) / log(2)) && n != 0) return true;
	return false;
}

int main()
{
	int n;
    cout << "Nhap n: ";
	cin >> n;
	cout << (ex4(n) ? "TRUE" : "FALSE") << endl;	
    system ("pause");
    return 0;
}