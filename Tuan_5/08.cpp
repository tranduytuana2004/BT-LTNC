#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void printbellow( const int n )
{
    int randbellow = rand() % (n - 1) - 0 + 1;

    cout << randbellow;
}

int main()
{
    srand( time(NULL) );
    int n;
    cin >> n ;

    printbellow(n);

    return 0;
}
