#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while ( n != -1 )
    {
        if( ( n >= 0 ) && ( ( n%5 ) == 0 ) )
        {
            cout <<"Thuong la :" << n/5 << endl;
            cin >> n;
        }
        else
        {
            cout << "Bye" <<endl << "-1";
            break;
        }
    }
}
