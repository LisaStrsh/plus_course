///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Print Data
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write overloaded functions `void print(int)` and `void print(double)` that
/// print an integer and a double, respectively.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int print(int n) {
    std::cout << n;
}
double print(double n) {
    std::cout << n;
}

int main()
{
    int i;
    double d;
    std::cin >> i >> d;
    print(i);
    print(d);
    return 0;
}
