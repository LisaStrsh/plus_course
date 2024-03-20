///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Execute Callback
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function `void executeCallback(void (*callback)())` that takes a
/// function pointer and executes the callback function.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>


void executeCallback(void (*callback)()){
    callback();
}

void print(){
    std::cout << "Aboba in the house\n";
    executeCallback(print);
    std::cout << "Странное задание";
}

int main()
{
    print();

    return 0;
}
