//
//  main.cpp
//  headertesting
//
//  Created by Ida Bagus Kerthyayana Manuaba on 12/10/16.
//  Copyright © 2016 introprogram. All rights reserved.
//

//#include <iostream>
#include "io.hpp"
#include "test.h"


int main()
{
    int a = readValue2();
    int b = readValue();
    writeValue(a+b);
    return 0;
}
