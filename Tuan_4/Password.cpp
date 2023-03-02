#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    for(int i = 0; i < n; ++i)
    {
        string t = string( s[i].rbegin(), s[i].rend() );
        for(int j = i + 1; j < n; ++j)
        {
            if( t == s[j] )
            {
                cout << t.size() << " " << t[t.size()/2];
                return 0;
            }
        }
    }

    return 0;
}
