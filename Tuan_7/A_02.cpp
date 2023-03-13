#include <iostream>

using namespace std;

void Size_of_arr1( int a[] )
{
    cout << sizeof(a) << endl;
}

void Size_of_arr2( int a[5] )
{
    cout << sizeof(a) << endl;
}

void Size_of_arr3( int* a )
{
    cout << sizeof(a) << endl;
}
int main()
{
    int a[10] = {0};
    cout << sizeof(a) << endl;
    Size_of_arr1(a);
    Size_of_arr2(a);
    Size_of_arr3(a);

    return 0;
}
