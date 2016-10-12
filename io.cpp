//
//  io.cpp
//  headertesting
//
//  Created by Ida Bagus Kerthyayana Manuaba on 12/10/16.
//  Copyright © 2016 introprogram. All rights reserved.
//



#include <iostream>
using namespace std;

int readValue()
{
    int var;
    cout << "Please enter a number : ";
    cin >> var;
    
    return var;
}

void writeValue(int var)
{
    cout << "The result is :" << var << endl;;
}
