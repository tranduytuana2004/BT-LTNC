#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while( n --> 0)
    {
        int x;
        cin >> x;

        int a[x];
        int sum = 0;
        for(int i = 1; i <= x; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        a[0] = 0;
        int sumleft[x] = {};
        for(int i = 1; i <= x; ++i)
        {
            sumleft[i] = sumleft[i-1] + a[i-1];
        }

        bool flag = 0;
        for(int i = 1; i <= x; ++i)
        {
            if( ( sum - 2*sumleft[i] - a[i] ) == 0 )
            {
                flag = 1;
                break;
            }
        }

        if( flag == 1 )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
