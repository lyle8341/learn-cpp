#pragma once

#ifdef __cplusplus
#include <iostream>
#include <fstream>
using namespace std;


//#define TEXT_WRITE

//#define TEXT_READ

//#define BINARY_WRITE
//#define BINARY_READ
#else
#include <stdio.h>

//#define C_READ_FILE
//#define C_WRITE_FILE
//#define C_READ_WRITE_MODE

#define C_FILE_COPY
#endif