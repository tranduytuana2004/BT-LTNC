#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x,y;

    cout << "Nhap toa do:";
    cin >> x>>y;

    double Distance = sqrt( x*x + y*y );

    cout << "Khoang cach tu goc toa do toi diem co toa do x y la :";
    cout << Distance;
    cout << endl;

    return 0;
}
