//
//  Fibonacci.cpp
//  Lab 7
//
//  Created by Pranav Thombare on 11/03/2019.
//  Copyright © 2019 Pranav Thombare. All rights reserved.
//

#include "Fibonacci.hpp"
#include <iostream>
using namespace std;

void Fibonacci::insert(double limit)
{
    double temp = 0.0;
    f.push_back(a);
    f.push_back(b);
    for(double i=0;i<limit-2;i++)
    {
        temp = a+b;
        f.push_back(temp);
        a=b;
        b=temp;
        
    }
    cout<<temp;
}
