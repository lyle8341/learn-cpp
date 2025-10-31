#pragma once

#ifdef __cplusplus

#include <iostream>
using namespace std;

//#define DEFINE_STRUCT
//#define STRUCT_ARRAY
//#define STRUCT_POINTER

//#define STRUCT_NESTED
//#define STRUCT_AS_PARAM

//#define STRUCT_CONST
//#define STRUCT_DEFAULT
//#define STRUCT_PTR_ARRAY

#else
#include <stdio.h>

//#define C_STRUCT_ALIAS
//#define C_STRUCT_NESTED
#define C_STRUCT_MEM_ALIGN

#endif