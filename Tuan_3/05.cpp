#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    int a[n+1][m+1];
    int k = 1;

   int hangdau = 1, cotdau = 1;
   int hangcuoi = n, cotcuoi = m;

   for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <=m; ++j)
        {
            a[i][j] = 0;
        }
    }


    while( k <= n*m )
    {
        for(int i = hangdau; i <= cotcuoi; ++i)
        {
            if( a[hangdau][i] == 0 )
            {
                a[hangdau][i] = k;
                ++k;
            }
        }
        ++hangdau;
        for(int i = hangdau; i <= hangcuoi; ++i)
        {
            if( a[i][cotcuoi] == 0 )
            {
                a[i][cotcuoi] = k;
                ++k;
            }
        }
        --cotcuoi;
        for(int i = cotcuoi; i >= cotdau; --i)
        {
            if( a[hangcuoi][i] == 0 )
            {
                a[hangcuoi][i] = k;
                ++k;
            }
        }
        --hangcuoi;
        for(int i = hangcuoi; i >= hangdau; --i)
        {
            if( a[i][cotdau] == 0 )
            {
                a[i][cotdau] = k;
                ++k;
            }
        }
        ++cotdau;
    }
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <=m; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
