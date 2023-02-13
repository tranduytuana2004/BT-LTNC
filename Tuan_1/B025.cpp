#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double a[6];
    double sum = 0;

    for( int i = 0; i <= 4; ++i )
    {
        cin >> a[i];
        sum += a[i];
    }

    sum /= 5;
    double Min = abs( a[0] - sum );
    double flag = a[0];

    for(int i = 1; i < 5; ++i)
    {
        if ( abs( a[i] - sum ) < Min )
        {
            Min = abs( a[i] - sum );
            flag = a[i];
        }
    }
    cout << flag;

    return 0;
}
