#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

long long Dec2Bin(int decimalNumber)
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}

int main()
{
    int decimalNumber;

    cin >> decimalNumber;

    cout << Dec2Bin( decimalNumber);
}
