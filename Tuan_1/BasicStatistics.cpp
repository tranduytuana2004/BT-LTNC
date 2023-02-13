#include <iostream>

using namespace std;

int main()
{
    cout << "So n: ";
    int n;
    cin >> n;

    cout << "n so la:";
    int a[101];
    double sum = 0;
    for( int i = 0; i < n; ++i )
    {
        cin >> a[i];
        sum += a[i];
    }

    int Min = a[0];
    int Max = a[0];

    for( int i = 1; i < n; ++i )
    {
        if ( a[i] < Min )
        {
            Min = a[i];
        }
        else
        {
            Max = a[i];
        }
    }

    cout << "Mean: " << sum/n << endl;
    cout << "Max: " << Max << endl;
    cout << "Min: " << Min << endl;
}
