//
//  main.cpp
//  Lab 7
//
//  Created by Pranav Thombare on 11/03/2019.
//  Copyright © 2019 Pranav Thombare. All rights reserved.
//

#include <stdio.h>
#include "Fibonacci.hpp"
#include <iostream>
using namespace std;

int main()
{
    double number;
    //char choice;
    Fibonacci f1;
    
    cout<<"Enter the limit of the Fibonacci series:";
    cin>>number;
    f1.insert(number);
    
    
}
