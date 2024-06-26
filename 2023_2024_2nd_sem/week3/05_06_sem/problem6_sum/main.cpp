///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Sum of Two Numbers
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads two integers from the standard input and calculates
/// their sum using pointers. Print the result.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int* pointer_a = &a;
    int* pointer_b = &b;

    std::cout << *pointer_a + *pointer_b;

    return 0;
}
