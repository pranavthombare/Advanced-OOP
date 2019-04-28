//
//  main.cpp
//  Lab 8 Core 1
//
//  Created by Pranav Thombare on 13/03/2019.
//  Copyright © 2019 Pranav Thombare. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void capitalize(string &str)
{
    for(string::iterator itr = str.begin(); itr != str.end(); ++itr)
    {
        if(*itr == '!')
            break;
        else
        *itr = toupper(*itr);
    }
    
}

int main()
{
    string str;
    str="this is a test line!this wont be capitalized";
    capitalize(str);
    cout<<str<<endl;
    return 0;
}
