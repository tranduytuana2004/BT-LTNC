#include <iostream>
using namespace std;

int count_even(int* a, int n)
{
    int Count = 0;
    for(int i = 0; i < n; ++i)
    {
        if(a[i]%2 == 0)
        {
            ++Count;
        }
    }

    return Count;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    /*
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }*/

    int Count1 = count_even(a,5);
    int Count2 = count_even(a,n) - count_even(a,n-5);
    cout << Count1 << ' ' << Count2;
}
