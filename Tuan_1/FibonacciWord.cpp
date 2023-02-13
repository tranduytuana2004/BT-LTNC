#include <iostream>

using namespace std;

int main()
{
    string s[11];
    s[0] = "a";
    s[1] = "b";
    cout << s[0] << " " << s[1] << " ";

    for( int i = 2; i < 10; ++i )
    {
        s[i] = s[i-1] + s[i-2];
        cout << s[i] << " ";
    }

    return 0;
}
