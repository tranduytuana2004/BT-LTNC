#include <iostream>

using namespace std;

int main()
{
    cout << "12 midnight" << endl;
    for ( int i = 1; i < 24; ++i )
    {
         if ( i <= 11 )
         {
             cout << i << "am" << endl;
         }
         else if ( i == 12 )
         {
             cout << i << " noon" << endl;
         }
         else
         {
             cout << i - 12 << "pm" << endl;
         }
    }
}
