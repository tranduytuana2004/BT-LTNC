#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if( n < 0 )
    {
        cout << n;
        return 0;
    }
    else
    {
        int BeforVal = n;


        while( cin >> n )
        {
            if( n != BeforVal )
            {
                cout << BeforVal << " ";
                BeforVal = n;
            }

            if( n < 0 )
            {
                cout << n;
                break;
            }
        }
    }

    return 0;
}
