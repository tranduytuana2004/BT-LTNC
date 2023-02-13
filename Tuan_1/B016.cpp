#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "Nhap 3 so:" << endl;
    cin >> a >> b >> c;

    if(( a == b ) && ( a == c ))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
