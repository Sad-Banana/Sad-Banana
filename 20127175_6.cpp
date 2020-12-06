#include <bits/stdc++.h> 
using namespace std;   
void ex6(int x, int y) 
{ 
    int d; 
    d = __gcd(x, y); 
  
    x = x / d; 
    y = y / d; 
  
    cout << x << "/" << y << endl; 
} 
  
int main() 
{ 
    int x, y; 
    cout << "Input 2 numbers: ";
    cin >> x >> y;
    cout << x << "/" << y << " = ";
    ex6(x, y);
    system("pause");
    return 0; 
} 