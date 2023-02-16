#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sodau1 = 1;
    int sodau2 = n;

    for(int i = 0; i < n; ++i)
    {
        for(int j = sodau1 ; j < sodau1 + sodau2 ; ++j)
        {
            if ( (j%10) == 0 )
            {
                cout << "10" << " ";
            }
            else if ( ( j/10 ) > 0 )
            {
                cout << j%10 << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        ++sodau1;

        cout << endl;
    }

    return 0;
}
