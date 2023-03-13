#include <iostream>
#include <algorithm>

using namespace std;

bool check(const int n)
{
    if( n <= 1)
    {
        return 0;
    }

    for(int i = 2; i < n; ++i)
    {
        if( n % i == 0 )
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

    if( check(n) == 1 )
    {
        cout << "Yes! This is a prime number" << endl;
    }
    else
    {
        cout << "No! This isn't a prime number" << endl;
    }

    return 0;
}
