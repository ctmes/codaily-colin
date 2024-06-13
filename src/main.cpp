#include <iostream>
#include "my_header.h"
#include <Python.h>

int main()
{
    std::cout << "Hello from C++ backend!" << std::endl;

    // Initialize the Python interpreter
    Py_Initialize();

    // Check if the initialization was successful
    if (!Py_IsInitialized())
    {
        std::cerr << "Python initialization failed" << std::endl;
        return -1;
    }

    // Run a simple Python command
    PyRun_SimpleString("print('Hello from Python!')");

    // Finalize the Python interpreter
    Py_Finalize();

    return 0;
}
