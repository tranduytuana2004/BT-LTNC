#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a,b;

    cout << "Nhap 2 so nguyen:" << endl;
    cin >> a >> b;

    cout << "So lon hon la:" << endl;
    cout << ( a + b + abs( a - b) ) / 2;

    return 0;
}
