//
//  main.cpp
//  Lab 8 Core 4
//
//  Created by Pranav Thombare on 13/03/2019.
//  Copyright © 2019 Pranav Thombare. All rights reserved.
//

#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

bool checkpair(char left,char right)
{
    if(left == '(' && right == ')')
        return true;
    else if(left == '{' && right == '}')
        return true;
    else if(left == '[' && right == ']')
        return true;
    return false;
}

bool checkparenthesis(string exp)
{
    stack<char>  S;
    for(auto itr=exp.begin();itr!=exp.end();itr++)
    {
        if(*itr == '(' || *itr == '{' || *itr == '[')
            S.push(*itr);
        else if(*itr == ')' || *itr == '}' || *itr == ']')
        {
            if(checkpair(S.top(),*itr))
                S.pop();
        }
    }
    return S.empty() ? true:false;
}

int main()
{
    string expression;
    cout<<"Enter an expression:  ";
    cin>>expression;
    if(checkparenthesis(expression))
        cout<<"The order of parenthesis is correct.\n";
    else
        cout<<"The order of parenthesis is incorrect/incomplete\n";
}
