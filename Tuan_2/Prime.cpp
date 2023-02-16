#include <iostream>
#include <cmath>

using namespace std;

bool snt( int a )
{
    if( a <=1 )
    {
        return 0;
    }

    for( int i = 2; i <= sqrt(a); ++i)
    {
        if ( a%i == 0 )
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    cin >> n;

    if( snt(n) == 1 )
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}
