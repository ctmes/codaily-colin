#include "my_header.h"
#include <iostream>

#include <Python.h>

void my_function()
{
    Py_Initialize();
    PyRun_SimpleString("print('Printing Hello from Source.cpp!')");
    Py_Finalize();
}
