#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sao = 2*n - 1;
    int cach = 0;

    for(int i = 0; i < n; ++i )
    {
        for(int k = 0; k <= cach; ++k)
        {
            cout << " ";
        }
        cach++;

        for(int j = 1; j <= sao; ++j)
        {
            cout << "*";
        }
        sao -= 2;

        cout << endl;
    }

    return 0;
}
