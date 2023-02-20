#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;

    char a[m+1][n+1];
    int  b[m+1][n+1];

    for(int i = 1; i <= m; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            cin  >> a[i][j];
        }
    }
    for(int i = 0; i <= m; ++i)
    {
        for(int j = 0; j <= n; ++j)
        {
            b[i][j] = 0;
        }
    }

    for(int i = 1; i <= m; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            if( a[i][j] == '*' )
            {
                if( a[i-1][j-1] != '*' )
                {
                    b[i-1][j-1]++;
                }
                if( a[i-1][j] != '*' )
                {
                    b[i-1][j]++;
                }
                if( a[i-1][j+1] != '*' )
                {
                    b[i-1][j+1]++;
                }
                if( a[i][j-1] != '*' )
                {
                    b[i][j-1]++;
                }
                if( a[i][j+1] != '*' )
                {
                    b[i][j+1]++;
                }
                if( a[i+1][j-1] != '*' )
                {
                    b[i+1][j-1]++;
                }
                if( a[i+1][j] != '*' )
                {
                    b[i+1][j]++;
                }
                if( a[i+1][j+1] != '*' )
                {
                    b[i+1][j+1]++;
                }
                b[i][j] = int('*');
            }
        }
    }
    for(int i = 1; i <= m; ++i)
    {
        for(int j = 1; j <= n ; ++j)
        {
            if( b[i][j] == int('*') )
            {
                cout << "*" << " ";
            }
            else
            {
                cout << b[i][j] << " ";
            }
        }
        cout << endl;
    }
}
