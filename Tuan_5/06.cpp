#include <iostream>

using namespace std;

int UCLN(const int a, const int b)
{
    if( a%b == 0 )
    {
        return b;
    }

    return UCLN( b, a%b );
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    if( UCLN(num1, num2) != 1 )
    {
        cout << "Uoc chung lon nhat la: " << UCLN(num1, num2) << endl;
    }
    else
    {
        cout << "Hai so nguyen to cung nhau" << endl;
    }

    return 0;
}
