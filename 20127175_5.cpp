#include <iostream>
using namespace std;
bool ex5(int n) 
{ 
    if (n <= 1)
    { 
        return false; 
    }
    for (int i = 2; i < n; i++) 
        if (n % i == 0)
        { 
            return false; 
        }
    return true; 
}
void dem(int n) 
{ 
    for (int i = 2; i < n; i++) 
    { 
        if (ex5(i))
        { 
            cout << i << " "; 
        }
    }
}
int main() 
{ 
    int n; 
    cout << "Nhap n: ";
    cin >> n;
    
    if (ex5(n))
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }
    cout << endl;
    dem(n);
    cout << endl;
    system("pause");
    return 0;
}