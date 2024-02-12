//
// Created by admin on 2/11/24.
//

#include "start.h"

#ifdef Q_OS_HACKERS
#define MY_EXPORT __declspec(dllexport)
#else
#define MY_EXPORT
#endif