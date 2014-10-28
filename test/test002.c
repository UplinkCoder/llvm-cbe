//===-- CBackend.cpp - Library for converting LLVM code to C --------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This code tests to see that the CBE will execute a for loop correctly.
//
//===----------------------------------------------------------------------===//

#include <stdio.h>

int main()
{
    int i, x = 0;
    for (i = 0; i < 6; i++)
        ++x;
    return x;
}